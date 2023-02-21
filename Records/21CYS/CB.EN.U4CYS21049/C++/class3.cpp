#include<iostream>
using namespace std;

class area{
    public:d
    int x,y;
    area(int a,int b);
};

area :: area (int a,int b){
    x=a;
    y=b;
}

int main(){
    area d(10,10);
    cout<<d.x*d.y+69<<endl;
}