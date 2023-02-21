#include<iostream>
using namespace std;

class area{
    public:
    int l,b;
    void getdata(){
        cin>>l>>b;
    }
};

class area1:area{
    public:
    void calc(){
        cout<<l*b<<endl;
    }
};

int main(){
    area1 c;
    c.getdata();
    c.calc();
    return 0;

}