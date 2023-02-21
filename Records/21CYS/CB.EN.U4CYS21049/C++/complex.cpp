#include<iostream>
using namespace std;


class complex{
    private:
    int r1,r2,i1,i2;
    int c1,c2;

    public:
    void read(){
        cin>>r1>>i1;
        cin>>r2>>i2;
        c1=r1+r2;
        c2=i1+i2;
    }
    void display(){
        cout<<c1<<"+"<<c2<<"i"<<endl;
    }
};

int main(){
    complex c;
    c.read();
    c.display();
}