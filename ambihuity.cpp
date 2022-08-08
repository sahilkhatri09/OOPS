#include<iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"hello"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"Hi"<<endl;
    }
};
class derived : public base1,public base2{
    public:
    void greet(){
        base1 :: greet();
    }
};
int main(){
      derived d;
      d.greet();
    return 0;
}