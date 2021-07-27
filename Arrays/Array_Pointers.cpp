#include <iostream>
using namespace std;

int main()
{
    // Array Example
    //int marks[] = {100, 200, 500, 800};
    //OR
    int Marks[4];
    Marks[0] = 2277;
    Marks[1] = 5522;
    Marks[2] = 9911;
    Marks[3] = 6633;

    // WE can change the value of an array
    // marks[2] = 7755;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << Marks[i] << endl;
    }

    int *p = Marks;

    // The address of array elements are
    cout << "\nThe address of Marks[0] is " << p << endl;
    cout << "The address of Marks[1] is " << (p + 1) << endl;
    cout << "The address of Marks[2] is " << (p + 2) << endl;
    cout << "The address of Marks[2] is " << (p + 3) << endl;

    // Acessing array elements using pointers
    cout << "\nThe value of *p     is " << *p << endl;
    cout << "The value of *(p+1) is " << *(p + 1) << endl;
    cout << "The value of *(p+2) is " << *(p + 2) << endl;
    cout << "The value of *(p+3) is " << *(p + 3) << endl;

    return 0;
}
