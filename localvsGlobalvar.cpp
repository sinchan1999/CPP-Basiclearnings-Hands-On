#include <iostream>
using namespace std;

int c = 1000; //-->> Global value of c.

int main()
{
    int c = 0; //-->>Local initialized value of c.
    int a = 20;
    int b = 30;
    c = a + b; // --> Present value of c.

    cout << "The local value of c is " << c << endl;
    cout << "The global value of c is " << ::c << endl;

    cout << "By default the scope is local.But we can use scope resolution operator '::' to print the global values as show above.";
    return 0;
}
