#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a = 5, b = 4;
    // Arithmetic Operators
    cout << "Following are the arithmetic operators" << endl;
    cout << "The value of a + b is-->" << a + b << endl;
    cout << "The value of a - b is-->" << a - b << endl;
    cout << "The value of a * b is-->" << a * b << endl;
    cout << "The value of a / b is-->" << a / b << endl;
    cout << "The value of a % b is-->" << a % b << endl;
    cout << "The value of a++is-->" << a++ << endl;
    cout << "The value of a-- is-->" << a-- << endl;
    cout << "The value of ++a is-->" << ++a << endl;
    cout << "The value of --a is-->" << --a << endl;
    cout << endl;

    // Assignment Operators--> used to assign values to variables
    int c = 4, d = 3;
    char e = 'D';

    // Comparison Operators
    cout << "Following are the comparison operators" << endl;
    cout << "The value of a==b is-->" << (a == b) << endl;
    cout << "The value of a!=b is-->" << (a != b) << endl;
    cout << "The value of a>b is-->" << (a > b) << endl;
    cout << "The value of a>=b is-->" << (a >= b) << endl;
    cout << "The value of a<b is-->" << (a < b) << endl;
    cout << "The value of a<=b is-->" << (a <= b) << endl;
    cout << endl;

    // Logical Operators
    cout << "Following are the logical operators" << endl;
    cout << "The value of a==b && a<b is-->" << ((a == b) && (a < b)) << endl;
    cout << "The value of a==b || a<b is-->" << ((a == b) || (a < b)) << endl;
    cout << "The value of a==b not a<b is-->" << (!(a == b)) << endl;
    cout << endl;

    return 0;
}