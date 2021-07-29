#include <iostream>
using namespace std;

class Employee
{
private:
    int accNo, password, adhaarNo;

public:
    int salary, bonus;

    void setData(int acc1, int pass1, int adh1); // Declaration Or Function prototype
    void getData()
    {
        cout << "The value of accNo    is " << accNo << endl;
        cout << "The value of password is " << password << endl;
        cout << "The value of adhaarNo is " << adhaarNo << endl;

        cout << "The value of salary is " << salary << endl;
        cout << "The value of bonus  is " << bonus << endl;
    }
};

void Employee ::setData(int acc1, int pass1, int adh1)
{
    accNo = acc1;
    password = pass1;
    adhaarNo = adh1;
}

int main()
{
    Employee emp;
    // emp.accNo = 1199883; -->This will throw error as a is private-access type . So can't be accessed directly.
    emp.salary = 70000;
    emp.bonus = 5000;

    emp.setData(1199883, 2226, 42342342);
    emp.getData();
    return 0;
}
