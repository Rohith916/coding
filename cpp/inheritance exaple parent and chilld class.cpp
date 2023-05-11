#include<iostream>
#include<iomanip>
using namespace std;
class Parent
{
    private:
    int num1,num2;
    public:
    void child1(int num1,int num2)
    {
        int add=num1+num2;
        {
        cout<<add<<endl;
        }
    }
};
class child1 :public Parent
{
    public:
    void children1(int num1,int num2)
    {
        int sub=num1-num2;
        {
        cout<<sub<<endl;
        }
    }
};
class child2 :public Parent
{
    public:
    void children2(int num1,int num2)
    {
       int mul=num1*num2;
        {
            cout<<mul<<endl;
        }
        
    }
};
class child3 :public Parent
{
    public:
    float children3(int num1,int num2)
    {
       float div=num1/num2;
        {
            cout<<fixed<<setprecision(2)<<div<<endl;
        }
        return div;
    }
};
int main()
{
    int a,b;
    cin>>a>>b;
    Parent obj1;
    obj1.child1(a,b);
    child1 obj2;
    obj2.children1(a,b);
    child2 obj3;
    obj3.children2(a,b);
    child3 obj4;
    obj4.children3(a,b);
   
}