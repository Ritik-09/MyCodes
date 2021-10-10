#include <iostream>
using namespace std;
class Y;
class X
{
    int a;

public:
    void setValue(int n)
    {
        a = n;
    }
    friend void compare(X *, Y *);
};

class Y
{
    int b;

public:
    void setValue(int n)
    {
        b = n;
    }
    friend void compare(X *, Y *);
};

void compare(X *x, Y *y)
{
    if (x->a == y->b)
    {
        cout << "Both numbers are equal";
    }
    else
        cout << "Not equal";
}
int main()
{
    X ob1;
    Y ob2;
    int p, q;
    cout << "Enter 1st and 2nd number: ";
    cin >> p >> q;
    ob1.setValue(p);
    ob2.setValue(q);
    compare(&ob1, &ob2);
    return 0;
}