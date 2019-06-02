
#include <iostream>
#include <cctype>
#include "Hugeint.h"
using namespace std;
HugeInt::HugeInt( long value )
{
   for ( int i = 0; i < digits; i++ )
      integer[ i ] = 0;
   for ( int j = digits - 1; value != 0 && j >= 0; j-- )
   {
      integer[ j ] = value % 10;
      value /= 10;
   }
}
HugeInt::HugeInt( const string &number )
{
   for ( int i = 0; i < digits; i++ )
      integer[ i ] = 0;
   int length = number.size();
   for ( int j = digits - length, k = 0; j < digits; j++, k++ )
      if ( isdigit( number[ k ] ) )
         integer[ j ] = number[ k ] - '0';

}
int HugeInt::getLength() const
{
   int i;

   for ( i = 0; i < digits; i++ )
      if ( integer[ i ] != 0 )
         break;
   return digits - i;
}

HugeInt HugeInt::operator+( const HugeInt &op2 ) const
{
   HugeInt temp;
   int carry = 0;
   for ( int i = digits - 1; i >= 0; i-- )
   {
      temp.integer[ i ] = integer[ i ] + op2.integer[ i ] + carry;
      if ( temp.integer[ i ] > 9 )
      {
         temp.integer[ i ] %= 10;
      }
      else
         carry = 0;
   }

   return temp;

HugeInt HugeInt::operator+( int op2 ) const
{
   return *this + HugeInt( op2 );
}
HugeInt HugeInt::operator+( const string &op2 ) const
{
   return *this + HugeInt( op2 );
}
bool HugeInt::operator==( const HugeInt &op2 ) const
{
   for ( int i = 0; i < digits; i++ )
         return false;
   return true;
}

// inequality operator; HugeInt != HugeInt
bool HugeInt::operator!=( const HugeInt &op2 ) const
{
   return !( *this == op2 ); // return opposite of ==
} // end function operator!=

// less than operator; HugeInt < HugeInt
bool HugeInt::operator<( const HugeInt &op2 ) const
{
   for ( int i = 0; i < digits; i++ ) // compare each element
   {
      if ( integer[ i ] == op2.integer[ i ] )
         continue; // test next element
      else if ( integer[ i ] > op2.integer[ i ] )
         return false; // first element larger
      else
         return true; // first element smaller
   } // end for

   return false; // if reached this point, objects are equal
} // end function operator<

// less than or equal operator; HugeInt <= HugeInt
bool HugeInt::operator<=( const HugeInt &op2 ) const
{
   return !( *this > op2 );
} // end function operator<=

// greater than operator; HugeInt > HugeInt
bool HugeInt::operator>( const HugeInt &op2 ) const
{
   return op2 < *this;
} // end function operator>

// greater than or equal operator; HugeInt >= HugeInt
bool HugeInt::operator>=( const HugeInt &op2 ) const
{
   return !( *this < op2 );
} // end function operator>=

// overloaded output operator
ostream& operator<<( ostream &output, const HugeInt &num )
{
   int i;

   for ( i = 0; i < HugeInt::digits && num.integer[ i ] == 0; i++ )
      ; // skip leading zeros

   if ( i == HugeInt::digits )
      output << 0;
   else
      for ( ; i < HugeInt::digits; i++ )
         output << num.integer[ i ];

   return output;
} // end function operator<<

// subtraction operator, subtract op2 from (*this)
HugeInt HugeInt::operator-( const HugeInt &op2 ) const
{
   // return if first value is smaller; we are not handling negatives
   if ( op2 > *this )
   {
      cout << "Error: Tried to subtract larger value from smaller value."
         << endl;
      return HugeInt( "0" );
   } // end if

   HugeInt result( "0" ); // final result currently 0

   // used to determine if previous digit had 10 added to it;
   // if true, current digit needs to be reduced by 1
   bool minusOne = false;

   // for each digit in both arrays,
   // subtract digit of smaller int from digit of larger int
   for ( int i = digits - 1; i >= 0; i-- )
   {
      // find digits we will currently be subtracting
      int topValue = this->integer[ i ];
      int bottomValue = op2.integer[ i ];

      // if previous topValue had 10 added to it;
      // subtract one from current topValue
      if ( minusOne )
      {
         if ( topValue == 0 ) // topValue cannot become -1
            // set to 9 but keep minusOne true for next digit
            topValue = 9;
         else
         {
            topValue -= 1; // subtract from top value
            minusOne = false; // minusOne is handled, return to false
         } // end else
      } // end outer if

      if ( topValue >= bottomValue )
         // if topValue larger, perform subtraction and store result
         result.integer[ i ] = topValue - bottomValue;
      else
      {
         topValue += 10; // if bottomValue larger, add 10 to topValue
         minusOne = true; // next digit must be decreased

         // topValue is now larger, perform subtraction and store result
         result.integer[ i ] = topValue - bottomValue;
      } // end else
   } // end for

   return result; // return final result
} // end function operator-

// multiplication operator; multiply op2 with (*this)
HugeInt HugeInt::operator*( const HugeInt &op2 ) const
{
   int carryOver = 0;
   HugeInt total( "0" );
   HugeInt smaller = ( *this < op2 ) ? *this : op2;
   HugeInt larger = ( *this > op2 ) ? *this : op2;
   int x;

   for ( x = 0; ( x < digits ) && ( larger.integer[ x ] == 0 ); x++ )
      ;

   int indexOfFirstDigitForLarger = x;
   for ( int i = digits; i > digits - smaller.getLength(); i-- )
   {

      HugeInt currentInt( "0" );
      int currentIntFrontHandle = i - 1;


      for ( int j = digits; j > digits - larger.getLength(); j-- )
      {

         int currentResult = carryOver +
            ( larger.integer[ j - 1 ] * smaller.integer[ i - 1 ] );

        er
         if ( j - 1 == indexOfFirstDigitForLarger )
         {
            carryOver = 0;


            currentInt.integer[ currentIntFrontHandle ] =
               currentResult % 10;
            currentIntFrontHandle -= 1;
            currentInt.integer[ currentIntFrontHandle ] =
               currentResult / 10;
            currentIntFrontHandle -= 1;
         }
         else
         {

            carryOver = currentResult / 10;


            currentInt.integer[ currentIntFrontHandle ] =
               currentResult % 10;
            currentIntFrontHandle -= 1;
         }
      }

      total = total + currentInt;
   }

   return total;
}
HugeInt HugeInt::operator/( const HugeInt &op2 ) const
{
   HugeInt remainderIntegers( *this );


   HugeInt currentValue( "0" );
   HugeInt result( "0" );

   int maxSolutionLength = this->getLength();

   // f
   for ( int i = digits - maxSolutionLength; i < digits; i++ )
   {
      currentValue = currentValue * HugeInt( "10" );
      currentValue.integer[ digits - 1 ] = remainderIntegers.integer[ i ];

      HugeInt tempResult( "0" );
      if ( op2 > currentValue )
         result.integer[ i ] = 0;
      else
      {
         int j;
         for ( j = 1; j <= 10; j++ )
         {
            HugeInt tempProduct = op2 * HugeInt( j );
            if ( tempProduct > currentValue )
               break;
         }

         result.integer[ i ] = j - 1;

         tempResult = op2 * HugeInt( j - 1 );
      }on
      currentValue = currentValue - tempResult;
   }

   return result;
}

