#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*Find only the non-repeating element from the array where every element occurs twice!*/

    int arr[] = {100, 27, 55, 100, 55, 188, 199, 188, 199};

    int k = arr[0];

    for (int i = 1; i < 9; i++)
    {

        k = k ^ arr[i];
    }
    cout << (k);
}