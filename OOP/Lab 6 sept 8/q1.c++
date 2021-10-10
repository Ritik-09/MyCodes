#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex()
    {
        real = 2;
        img = 8;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    complex(complex &x)
    {
        real = x.real;
        img = x.img;
    }
    void display()
    {
        cout << "The number is:\n";
        cout << real << "+" << img << "i" << endl;
    }
    ~complex()
    {
        cout << "Destructor is called" << endl;
    }
};
int main()
{
    complex c1;
    c1.display();
    complex c2(5,10);
    c2.display();
    complex c3(c1);
    c3.display();
    return 0;
}