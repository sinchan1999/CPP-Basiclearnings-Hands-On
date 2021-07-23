#include <iostream>
using namespace std;

int main()
{
    int x = 1100;

    int &y = x; // ---> y referencing x for value;
    int &z = y; // ---> z referencing y for value;

    // ---> x is the original variable but  y & z are Reference variable. z----> y ----> x

    //int y = 200; //-->conflicting declaration, if uncommented.

    x = 11342342;

    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "z= " << z << endl;

    // They always refer to the last updated value of x !!!
}