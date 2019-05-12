#include<iostream>
#include<ctime>
using namespace std;

class CDate
{
private:
    int day;
    int month;
    int year;
    int weekDay;
    int yearDay;

public:
    CDate()
    {
        set( time( NULL ) );
    }

    CDate(int y, int m, int d )
    {
        set(y,m,d);
    }

    void set(int y, int m, int d);

    void set( time_t theTime );

    int getYear()
    {
        return year;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }

    int getDayOfWeek()
    {
        return weekDay;
    }

    int getDayOfYear()
    {
        return yearDay;
    }

    int daysSpan( const CDate& d ) const;

    friend ostream& operator<<( ostream& os, const CDate& d );

    bool isLeapYear()
    {
        return isLeapYear( year );
    }

    static bool isLeapYear(int y)
    {
        return ( y %4 == 0 && y % 100 != 0 ) || ( y % 400 == 0 );
    }
};

void CDate::set(int y, int m, int d)
{
    struct tm mytime;
    memset( &mytime, 0, sizeof( mytime ) );
    mytime.tm_year = y-1900;
    mytime.tm_mon = m-1;
    mytime.tm_mday = d;
    time_t t = mktime( &mytime );
    set( t );
}

void CDate::set( time_t theTime )
{
    if ( theTime != -1 )
    {
        struct tm *newtime;
        newtime = localtime( &theTime );

        year = newtime->tm_year + 1900;
        month = newtime->tm_mon + 1;
        day = newtime->tm_mday;
        weekDay = newtime->tm_wday;
        yearDay = newtime->tm_yday;
    }
}

ostream& operator<<( ostream& os, const CDate& d )
{
    os << d.year << "年" << d.month << "月"<< d.day << "日";
    return os;
}

int CDate::daysSpan( const CDate& d ) const
{
    if ( year != d.year ) return 0;

    return d.yearDay - yearDay;
}

int main()
{
    CDate d1;
    cout << "Current date: " << d1 << endl;

    d1.set(2001,2,28);
    cout << d1 << endl;

    if ( d1.isLeapYear() )
        cout << "Is leep year.\n";
    else
        cout << "Not leap year.\n";

    cout << d1.getYear() << "年" << d1.getMonth() << "月"<< d1.getDay() << "日 星期"
        << d1.getDayOfWeek()
        << endl;

    CDate d2( 2001, 9, 19 );
    cout << "There are " << d1.daysSpan( d2 ) << " days between " << d1 << " and " << d2 << endl;
}
