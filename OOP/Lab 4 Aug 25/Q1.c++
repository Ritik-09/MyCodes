#include <iostream>
#include <string.h>
using namespace std;

class books{
    char name[25],author[25];
    int price;
    public:
        void input(){
            cin>>name>>author>>price;
        }
    friend void display(books,int,int);
};
void display(books k,int n,int m){
    if(k.price>n&&k.price<m){
        cout<<k.name<<"\t"<<k.author<<"\t"<<k.price<<endl;
    }
    return;
}

int main(){
    int n,m;
    cout<<"Enter No. of books: ";
    cin>>n;
    books b[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Title, author and price: ";
        b[i].input();
    }
    cout<<"Enter price range: ";
    cin>>n>>m;
    for(int i=0;i<n;i++){
        display(b[i],n,m);
    }
    return 0;
}