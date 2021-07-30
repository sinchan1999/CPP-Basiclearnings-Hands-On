#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num;

    num = {20, 4, 80, 77, 19, 55, 44, 333, 999, 1111};
    for (vector<int>::iterator itr = num.begin(); itr != num.end(); itr++)
    {
        if ((*itr) & 1 == 1) // If (a & 1) == 1 then its a Odd number Else an Even number !
        {
            cout << "Odd"
                 << "  ";
        }

        else
        {
            cout << "Even"
                 << "  ";
        }
    }
}