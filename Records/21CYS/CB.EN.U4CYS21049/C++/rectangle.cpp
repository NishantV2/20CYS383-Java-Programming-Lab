#include<iostream>
using namespace std;

class two{
    private:
    int l,b;
    public:
    void read(){
        cin>>l>>b;
    }
    int area(){
        return 2*l*b;
    }
};

int main(){
    two *r;
    int area=r->area();
    cout<<area<<endl;

    
    
}
