#include <iostream>
using namespace std;

struct employee
{

    int EmpID;
    std::string company = "";
    int salary;
};

int main()
{
    struct employee Meena;
    Meena.EmpID = 11099;
    Meena.company = "Amazon";
    Meena.salary = 15000;
    cout << "The value is " << Meena.EmpID << endl;
    cout << "The value is " << Meena.company << endl;
    cout << "The value is " << Meena.salary << endl;
    return 0;
}

/*
// Alternative way : 
typedef struct employee
{   
    int eId; 
    char favChar; 
    float salary; 
} emp; 
//Then we need to use  struct emp Meena;
*/