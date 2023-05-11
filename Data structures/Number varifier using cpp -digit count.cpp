//number varifier 
#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count=0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    if(count==10)
    {
        cout<<"Number verified";
    }
    else
    {
        cout<<"enter a valid number";
    }
}