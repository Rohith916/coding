// polymorphism example
#include <iostream>
using namespace std;
class Parent{
    public:
    void ranga(){
        cout<<"hello 1";
    }
    void sanjay() {
        cout<<"hello2";
    }
};
class child : public Parent {
    public:
    void rohith(){
        cout<<"hello3";
    }
};
int main(){
    child s;
    s.ranga();
    s.rohith();
    s.sanjay();
}
   