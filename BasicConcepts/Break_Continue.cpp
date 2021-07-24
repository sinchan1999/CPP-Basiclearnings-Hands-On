#include <iostream>
using namespace std;

int main()
{

    // --------------->>> Break-statement  <<<------------------
    for (int i = 1; i <= 5; i++)
    {
        /* code */
        if (i == 4)
        {
            break; // when our program encounters a break statement the it just comes out of the immediate loop.
        }
        cout << i << endl;
    }
    cout << "\n\n";

    // --------------->>> Continue-statement  <<<------------------
    for (int i = 1; i <= 5; i++)
    {
        /* code */
        if (i == 3)
        {
            continue; // continue simply skips the particular iteration and resumes from the next value.
        }
        cout << i << endl;
    }

    return 0;
}
