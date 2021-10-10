#include <iostream>
using namespace std;

class feetInch;

class meterCm
{
    float meters, centimeters;

public:
    void input(float m, float c)
    {
        meters = m;
        centimeters = c;
    }
    friend void compares(meterCm &x, feetInch &y);
};

class feetInch
{
    float inch;
    float feet;

public:
    void input(float i, float f)
    {
        inch = i;
        feet = f;
    }
    friend void compares(meterCm &, feetInch &);
};

void compares(meterCm &a, feetInch &b)
{
    if ((b.feet * 0.0254) < a.meters)
    {
        cout << "Distance in meters and centimers is larger\n";
    }
    else
    {
        cout << "Distance in inches and feet is larger\n";
    }
}

int main()
{
    meterCm a;
    feetInch b;
    int n, m;
    cout << "Enter meter and centimeter: ";
    cin >> n >> m;
    a.input(n, m);
    cout << "Enter feets and inches: ";
    cin >> n >> m;
    b.input(m, n);
    compares(a, b);
}