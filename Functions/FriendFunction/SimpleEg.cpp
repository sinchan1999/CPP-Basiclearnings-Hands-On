#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void mul(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void mul(X, Y);
};

void mul(X o1, Y o2)
{
    cout << "Multiplying data of X and Y objects gives me " << o1.data * o2.num;
}

int main()
{
    X a1;
    a1.setValue(5);

    Y b1;
    b1.setValue(10);

    mul(a1, b1);
    return 0;
}

//-- Minor change needed.