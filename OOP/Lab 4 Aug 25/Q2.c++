#include<iostream>
using namespace std;

class student
{
    char rno[10];
    char name[10];
    float m1,m2,m3;
    float avg;
    friend student comp(student,student);
    public:
        void input(){
            cout<<"Enter Roll and Name: ";
            cin>>rno>>name;
            cout<<"Enter marks m1,m2 and m3: ";
            cin>>m1>>m2>>m3;
            avg=m1+m2+m3;
            avg=avg/3;
        }
        student compare(student t,student st){
            if(t.avg>st.avg){
                return t;
            }
            return st;
        }
        void display(){
            cout<<"Name - "<<name<<endl;
            cout<<"Roll - "<<rno<<endl;
            cout<<"Marks - "<<endl;
            cout<<"M1: "<<m1<<endl;
            cout<<"M2: "<<m2<<endl;
            cout<<"M3: "<<m3<<endl;
            cout<<"Average Marks - "<<avg<<endl;
        }
};

student comp(student t,student st){
            if(t.avg>st.avg){
                return t;
            }
            return st;
        }
int main()
{
    int n;
    cout<<"Enter the number of Students: ";
    cin>>n;
    student s[n],st;
    for(int i=0;i<n;i++){
        s[i].input();
    }
    st=s[0];
    for(int i=0;i<n;i++){
       st = st.compare(s[i],st);
    }
    cout<<"Using member function"<<endl;
    st.display();
    for(int i=0;i<n;i++){
       st = comp(s[i],st);
    }
    cout<<"Using friend function"<<endl;
    st.display();

    
}