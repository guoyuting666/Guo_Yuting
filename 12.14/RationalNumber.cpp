#include <cstdlib>
#include <iostream>
#include "RationalNumber.h"
using namespace std;
RationalNumber::RationalNumber( int n, int d )
{
   numerator = n;
   denominator = ( d > 0 ) ? d : 1;
   reduction();
}
RationalNumber RationalNumber::operator+( const RationalNumber &a )
{
   return RationalNumber(
      numerator * a.denominator + denominator * a.numerator,
      denominator * a.denominator );
}
RationalNumber RationalNumber::operator-( const RationalNumber &s )
{
   return RationalNumber(
      numerator * s.denominator - denominator * s.numerator,
      denominator * s.denominator );
}
RationalNumber RationalNumber::operator*( const RationalNumber &m )
{
   return RationalNumber( numerator * m.numerator,
      denominator * m.denominator );
}
RationalNumber RationalNumber::operator/( const RationalNumber &d )
{
   if ( d.numerator != 0 )
   {
      return RationalNumber( numerator * d.denominator,
         denominator * d.numerator );
   }
   else
   {
      cout << "Divide by zero error: terminating program" << endl;
      exit( 1 );
   }
}
bool RationalNumber::operator<( const RationalNumber &lr ) const
{
   double thisVal = static_cast< double >( numerator ) / denominator;
   double lrVal = static_cast< double >( lr.numerator ) / lr.denominator;
   return thisVal < lrVal;
}
bool RationalNumber::operator>( const RationalNumber &gr ) const
{
   return gr < *this;
}
bool RationalNumber::operator<=( const RationalNumber &ler ) const
{
   return !( *this > ler );
}
bool RationalNumber::operator>=( const RationalNumber &ger ) const
{
   return !( *this < ger );
}
bool RationalNumber::operator==( const RationalNumber &er ) const
{
   return numerator == er.numerator && denominator == er.denominator;
}
bool RationalNumber::operator!=( const RationalNumber &ner ) const
{
   return !( *this == ner );
}
void RationalNumber::printRational() const
{
   if ( numerator == 0 )
      cout << numerator;
   else if ( denominator == 1 )
      cout << numerator;
   else
      cout << numerator << '/' << denominator;
}
void RationalNumber::reduction()
{
   int largest, gcd = 1;

   largest = ( numerator > denominator ) ? numerator : denominator;

   for ( int loop = 2; loop <= largest; loop++ )
       if ( numerator % loop == 0 && denominator % loop == 0 )
          gcd = loop;

   numerator /= gcd;
   denominator /= gcd;
}


