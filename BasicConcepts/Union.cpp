#include <iostream>
using namespace std;

union bank
{

    int acc_No;
    char sex;
    float amount;
};

int main()
{

    /*  
   --------------->>>> Advantages of union <<<<-----------------------

   Union provides better memory management than Struct.
   Union is used when you have to use the same memory location for two or more data members.
   It enables you to hold data of only one data member.
    
   --------------->>>> Disadvantages of union <<<<----------------------- 

   You can use only one union member at a time.
   All the union variables cannot be initialized or used with varying values at a time.
   Union assigns one common storage space for all its members.
   
   --------------->>>> CAUTION <<<<-----------------------

   If we try to so by uncommenting the below lines we see only the last value will remain correct
   leaving others with wrong values!
   
   When we use union, only the last variable can be directly accessed.*/

    union bank cust1;
    cust1.acc_No = 77005588;
    //cust1.sex = 'M';
    // cust1.amount = 2200.65;
    cout << cust1.acc_No << endl;
    //cout << cust1.sex << endl;
    //cout << cust1.amount << endl;

    return 0;
}
