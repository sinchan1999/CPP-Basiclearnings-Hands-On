#include <iostream>
using namespace std;

int main()
{

    // It is used to assign names to the integral constants which makes a program easy to read and maintain.

    enum TodoList
    {
        Assignment,
        Swimming,
        Coding,
        BikeTrip,
        Jogging,
        Gym

    };
    TodoList m1 = BikeTrip;
    cout << m1;
    return 0;
}
