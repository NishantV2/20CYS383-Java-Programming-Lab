#include<iostream>
using namespace std;


class a{
   public:
   int x;
   protected:
   int y;
};
class b : public a
    {
        public:
        void read(){
            cin>>x>>y;
        }
        void add(){
            cout<<x+y<<endl;
        }
    };

int main(){
    b c;
    c.read();
    c.add();

}
