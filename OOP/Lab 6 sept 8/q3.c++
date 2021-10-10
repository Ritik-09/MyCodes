#include <iostream>
#include <string.h>
using namespace std;

class string1
{
    int len;
    char *name;

public:
    string1()
    {
        len = 0;
        name = new char;
    }
    string1(char *s)
    {
        name = new char[strlen(s)];
        len = strlen(s);
        strcpy(name, s);
    }
    ~string1()
    {
        delete name;
    }
    void join(string1 &s1, string1 &s2)
    {
        len = s1.len + s2.len;
        name = new char[len];
        strcpy(name, s1.name);
        strcat(name," ");
        strcat(name,s2.name);
    }
    void display()
    {
        cout << "The string is: " << name << endl;
    }
    void display1()
    {
        cout << "The concatenated string is: " << name << endl;
    }
};
int main()
{
    char na[50];
    cout<<"Enter String 1: ";
    cin>>na;
    string1 c1(na), c3;
    cout<<"Enter String 2: ";
    cin>>na;
    string1 c2(na);
    c3.join(c1, c2);
    c1.display();
    c2.display();
    c3.display1();
    return 0;
}
