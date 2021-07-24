#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "What's your age" << endl;
    cin >> age;

    //----------------->>> If-Else<<< ----------------------------

    if ((age < 18) && (age > 0))
    {
        cout << "You are a kid" << endl;
    }
    else if (age == 18)
    {
        cout << "You can have your Driving License" << endl;
    }
    else if (age > 80)
    {
        cout << "You are too old to Drive." << endl;
    }
    else
    {
        cout << "You can have your Driving License" << endl;
    }

    //----------------->>> Switch Case <<< ----------------------------

    // switch (age)
    // {
    // case 18:
    //     cout << "You are 18" << endl;
    //     break;
    // case 22:
    //     cout << "You are 22" << endl;
    //     break;
    // case 2:
    //     cout << "You are 25" << endl;
    //     break;

    // case 100:
    //     cout << "Hurray..! That's a Century man!!" << endl;
    //     break;

    // default:
    //     cout << "No special cases" << endl;
    //     break;
    // }

    // cout << "Done with switch case";
    // return 0;
}
