#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    int salary;
    std::string name = " ";

public:
    void getData(void)
    {

        cout << "\nEnter the id of employee" << endl;
        cin >> id;
        cout << "Enter the name of employee" << endl;
        cin >> name;
        cout << "Enter the salary of employee" << endl;
        cin >> salary;
    }

    void displayData(void)
    {
        cout << "\nThe id of this employee is : " << id << endl;
        cout << "The name of this employee is : " << name << endl;
        cout << "The salary of this employee is " << salary << endl;
    }
};

int main()
{
    Employee emp[3];

    for (int i = 0; i < 3; i++)
    {
        emp[i].getData();
    }

    for (int i = 0; i < 3; i++)
    {
        emp[i].displayData();
    }

    return 0;
}
