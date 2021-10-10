#include <iostream>
using namespace std;

class power
{
public:
    inline int square(int n)
    {
        return n * n;
    }
    inline int cube(int n)
    {
        return n * n * n;
    }
};
int main()
{
    int n, r;
    power p;
    cout << "Enter the Number: ";
    cin >> n;
    r = p.square(n);
    cout << "Square of " << n << " = " << r << endl;
    r = p.cube(n);
    cout << "Cube of " << n << " = " << r << endl;
}