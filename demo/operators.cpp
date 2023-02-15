#include <iostream>
using namespace std;

int main(){
    //Arithmetic Operators : + - * / % ++ --
    //Assignment : = += -+ *= /= %= &= |= ^= >>= <<=
    //comparison : == != > < >= <=
    //Logical : && || !
    double a = 5;
    a /= 3;
    cout << a; //1.6666721
    
    int b = 5;
    b %= 3;
    cout << b; //2

    /*
    % is only defined for integer operands; "remainder" makes no sense if floating-point division is performed. 100.0 / 40 is 2.5; no remainder exists because a fraction was generated. In contrast, 100 % 40 is 20 (100 / 40 is 2 remainder 20).
    */

   /*
   The static_cast operator (static_cast<type>(expression)) converts the expression's value to the indicated type. Ex: If myIntVar is 7, then static_cast<double>(myIntVar) converts int 7 to double 7.0.
   static_cast<int>(numUnits)
   */

    int c = 5;
    c &= 3;
    cout << c; //1

    int d = 5;
    d &= 3;
    cout << d; //7

    int x = 5;
    x <<= 3;
    cout << x; //40

    return 0;
}
/*
Operator/Convention	Description	Explanation
( )	 Items within parentheses are evaluated first	In (a * (b + c)) - d, the + is evaluated first, then *, then -.
!	 ! (logical NOT) is next	! x || y is evaluated as (!x) || y
* / % + -	Arithmetic operators (using their precedence rules; see earlier section)	z - 45 * y < 53 evaluates * first, then -, then <.
<   <=   >   >=	Relational operators	x < 2 || x >= 10 is evaluated as (x < 2) || (x >= 10) because < and >= have precedence over ||.
==   !=	Equality and inequality operators	x == 0 && x >= 10 is evaluated as (x == 0) && (x >= 10) because < and >= have precedence over &&.
== and != have the same precedence and are evaluated left to right.
&&	Logical AND	x == 5 || y == 10 && z != 10 is evaluated as (x == 5) || ((y == 10) && (z != 10)) because && has precedence over ||.
||	Logical OR	|| has the lowest precedence of the listed arithmetic, logical, and relational operators.
*/
