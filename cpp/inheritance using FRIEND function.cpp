// inheritance using friend function  
#include<iostream>
using namespace std;
class b;
class A{
 private:
int x,y;
 
 friend b;
};
class b 
{
    public:
    A o;
    void get()
    {
        cin>>o.x>>o.y;
        
        cout<<o.x*o.y;
    }
};
int main()
{
    b o;
    o.get();
}