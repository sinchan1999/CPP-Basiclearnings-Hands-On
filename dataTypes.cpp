#include <iostream>
using namespace std;

int main()
{

    //float a = 25.25F;
    //long double ld = 25.25L;
    // ***NOTE: By default every default decimal is DOUBLE.
    // So we need to specify whether to take Float or long double by specifing 'f'/'F' OR 'l''L' at end respectively.
    cout << "The size of 25.25 is " << sizeof(25.25) << " bytes" << endl;
    cout << "The size of 25.25f is " << sizeof(25.25f) << " bytes" << endl;
    cout << "The size of 25.25F is " << sizeof(25.25F) << " bytes" << endl;
    cout << "The size of 25.25l is " << sizeof(25.25l) << " bytes" << endl;
    cout << "The size of 25.25L is " << sizeof(25.25L) << " bytes" << endl;

    cout << "\nThe size of 's' is " << sizeof('s') << " byte" << endl;
}