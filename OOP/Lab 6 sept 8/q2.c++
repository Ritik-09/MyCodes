#include <iostream>
using namespace std;

class time
{
    int hour, minu;

public:
    time()
    {
        hour = 0;
        minu = 0;
    }
    time(int h, int m = 0)
    {
        hour = h;
        minu = m;
    }
    time(const time &x)
    {
        hour = x.hour;
        minu = x.minu;
    }
    void display()
    {
        hour = hour + (minu / 60);
        minu = minu % 60;
        cout <<"The time is "<< hour << " and " << minu<<" minutes" << endl;
    }
};
int main()
{
    time t1;
    t1.display();
    time t2(4, 12);
    t2.display();
    time t3(t1);
    t3.display();
    time t4(t2);
    t4.display();
    return 0;
}
