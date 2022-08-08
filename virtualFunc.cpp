#include<iostream>
using namespace std;
class A{
    public:
    virtual void f1(){ cout<<"a";}
};
class B : public A{
    public:
    void f2();
    void f1(){cout<<"b";}
};
int main(){
     A *p;
     B o1;
     p = &o1;
     p->f1();
    return 0;
}