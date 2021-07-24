#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? ----> Data type which holds the address of other data types
    int a = 77;
    int *b;
    b = &a;

    // & ---> Address of Operator
    cout << "\nThe address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * ---> Dereference operator OR (value at)
    cout << "\nThe value at address b is  " << *b << endl;

    // Pointer to pointer  OR Pointer of Pointer
    int **c = &b;
    cout << "\nThe address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;

    cout << "\nThe value at address c is " << *c << endl;
    cout << "The value at address of[c{address of b (address of a)}] is " << **c << endl;

    return 0;
}
