//polymorphism example 2(multilevel)
#include <iostream>
using namespace std;
class Parent{
    public:
    void ranga(){
        cout<<"hello 1";
    }
};
class child1{
    public:
    void sanjay() {
        cout<<"hello2";
    }
};
class child2 : public Parent ,public child1 {
    public:
    void rohith(){
        cout<<"hello3";
    }
};
int main(){
    child2 s;
    s.ranga();
    s.rohith();
    s.sanjay();
}
   