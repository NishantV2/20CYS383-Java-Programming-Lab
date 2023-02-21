#include <iostream>
using namespace std;
class good
{
int a=12;
int b=17;
public:
void get()
{
cin>>a>>b;
}
void put()
{
cout<<a<<" "<<b;
}
};

int main()
{
good g;
g.get();
g.put();
return 0;
}