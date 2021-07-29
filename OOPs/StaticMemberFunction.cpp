/*Static Data member has the following properties:
-------->>>  It is initialized by zero when first object of class is created.
-------->>>Only one copy of static data member is created for the entire class and all object share the same copy.
-------->>>Its scope is within class but its lifetime is entire program.
-------->>>They are used to store the value that are common for all the objects. */

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // Declaration : static  data-type    variable-name

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {

        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
// Initialize static variable    Syntax--->>  data-type class-name :: variable-name = initial-value ;
int Employee::count; // Default value is 0

int main()
{
    Employee Ramu, Maggu, Joey;
    // Ramu.id = 1;
    // Ramu.count=1; // cannot do this as id and count are private

    Ramu.setData();
    Ramu.getData();
    Employee::getCount();

    Maggu.setData();
    Maggu.getData();
    Employee::getCount();

    Joey.setData();
    Joey.getData();
    Employee::getCount();

    return 0;
}
