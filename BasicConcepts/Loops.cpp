#include <iostream>

using namespace std;
int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    // --------------->>> For loop  <<<------------------

    for (int i = 1; i <= 5; i++)
    {
        /* code */
        cout << "777" << endl;
    }

    // --------------->>> While loop  <<<------------------
    cout << "\n While LOOP\n";
    int j = 1;
    while (j <= 7)
    {
        cout << j << endl;
        j++;
    }

    // --------------->>> Do-while Loop <<<------------------
    cout << "\n Do-while LOOP. It will run atleast once , no matter if the condition is true or false\n";
    int k = 50;
    do
    {
        cout << k << endl;
        k++;
    } while (k < 1);

    return 0;
}
