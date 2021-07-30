#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*The left shift and right shift operators should not be used for negative numbers in C.
    However, In C++, this behavior is well-defined.*/

    int arr[] = {100, 44, 22, 65, -1000, -4444};
    int arr2[6];

    cout << "Right shift is same as Dividing by 2" << endl;
    for (int i = 0; i < 6; i++)
    {

        arr2[i] = arr[i] >> 1;
        cout << arr2[i] << endl;
    }
    cout << ("\n");
    cout << "Left is same as Multiplying by 2" << endl;
    for (int i = 0; i < 6; i++)
    {
        arr2[i] = arr[i] << 1;
        cout << arr2[i] << endl;
    }
}