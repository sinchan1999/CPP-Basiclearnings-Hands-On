#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    const int a = 3; //--->>Constants in C++
    cout << "Original value of a : " << a << endl;
    //int a = 45; //--->>  will throw an error because 'a' is a constant
    //cout << "Modified value of a is: " << a << endl;

    //Manipulators in C++
    int x = 10, y = 5232, z = 1999272;
    cout << "\nThe value of a without set width is: " << x << endl;
    cout << "The value of b without set width is: " << y << endl;
    cout << "The value of c without set width is: " << z << endl;

    cout << "\nThe value of a is: " << setw(7) << x << endl;
    cout << "The value of b is: " << setw(7) << y << endl;
    cout << "The value of c is: " << setw(7) << z << endl;

    return 0;
}
