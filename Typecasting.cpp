#include <iostream>

using namespace std;

int main()
{

    int a = 50;
    float b = 10.11111;
    long double ld = 2023421123123123123.121212;

    cout << "Float Conversion :" << endl;
    cout << "The value of a is " << float(a) << endl;
    cout << "The value of ld is " << float(ld) << endl;

    cout << "\nInt Conversion :" << endl;
    cout << "The value of b is " << int(b) << endl;
    cout << "The value of ld is " << int(ld) << endl; //--> Throws a garbage value as int cant store such a big number!

    cout << "\nResult is : " << a + b << endl;
    cout << "Result is : " << a + int(b) << endl;

    cout << "Result is : " << a + (int)b + int(ld) << endl;
    return 0;
}
