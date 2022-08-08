#include<iostream>
using namespace std;
/*

class B : public A{
    first A() than B();
}

class C : public A,public B{
    first A() than B() than C()
}

class C : public B,virtual A{
    first A() than B() than C()
}
*/
class base1{
    int a1;
     public:
     base1(int b){
       a1 = b;
       cout<<"base1"<<endl;
     }
     ~base1(){
      cout<<"base1 des"<<endl;
     }
};
class base2{
    int a2;
     public:
     base2(int b){
       a2 = b;
       cout<<"base2"<<endl;
     }
};

class derived : public base1,public base2{
    public:
  derived(int a,int b) : base1(a) , base2(b){
     cout<<"dervied";
     
  }
  ~ derived(){
      cout<<"dervied des"<<endl;
     }

};
int main(){
      derived sahil(2,3);
    return 0;
}