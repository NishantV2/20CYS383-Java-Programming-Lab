#include<iostream>
using namespace std;
void swap(int *c,int *d){
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
}


int main(){
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
} 
