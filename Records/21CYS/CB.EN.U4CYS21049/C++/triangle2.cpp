#include<iostream>
#include<string>
using namespace std;

class area{
	private:
	int l1,l2,b1,b2,a1,a2;
	public:
	void read(){
		cin>>l1>>b1;
		cin>>l2>>b2;
	}
	void calc(){
		a1=0.5*l1*b1;
		a2=0.5*l2*b2;
	}
	void compare(){
		if(a1>a2){
			cout<<a1<<endl;
		}
		else{
			cout<<a2<<endl;
		}
	}
};

int main(){
	area c;
	c.read();
	c.calc();
	c.compare();
}