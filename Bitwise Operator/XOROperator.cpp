#include <iostream>
using namespace std;
int main()
{

    int a = 77;
    int b = 22;

    // Swapping can be done by consecutive 3 three XOR operations !
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping the value of a is   " << a << "  and the value of b is   " << b;
}
