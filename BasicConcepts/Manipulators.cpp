#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    const int a = 999; //--->>Constants in C++
    cout << "Constant value of a : " << a << endl;
    //int a = 55; //--->>  will throw an error because 'a' is a constant

    //Manipulators in C++
    //Manipulators helps in better formating of data on output screen.
    int x = 10, y = 5232, z = 1999272;
    cout << "\nThe value of a without set width is: " << x << endl;
    cout << "The value of b without set width is: " << y << endl;
    cout << "The value of c without set width is: " << z << endl;

    cout << "\nThe value of a using set width is: " << setw(7) << x << endl;
    cout << "The value of b using set width is: " << setw(7) << y << endl;
    cout << "The value of c using set width is: " << setw(7) << z << endl;

    return 0;
}
