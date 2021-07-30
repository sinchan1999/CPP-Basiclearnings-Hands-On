/*  Count number of bits to be flipped to convert A to B */

#include <iostream>
using namespace std;

// Function that count set bits
int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {

        count++;
        n = n & (n - 1); // FORMULA: To convert all set bits to 0 one by one in every step.
        cout << n << endl;
    }
    return count;
}

// Function that return count of
// flipped number
int FlippedCount(int a, int b)
{

    //   Returns the count of set bits in a XOR b
    return countSetBits(a ^ b);
}

// Driver code
int main()
{
    int a = 10;
    int b = 20;
    cout << "Required no.of Flips to Convert a to b : "
         << FlippedCount(a, b) << endl;
    return 0;
}
