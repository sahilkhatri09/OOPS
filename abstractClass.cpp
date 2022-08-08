#include<iostream>
using namespace std;


class person{
     public:
     //class having do nothing / pure virtual func is abstract class
     virtual void func() = 0;
};
class student : public person{
    public :
    // pure virtual func must be overridden in child class
    void func(){
        cout<<"s";
    }
    // we can make student also abstract class 
    // by virtual void func () = 0;
};
int main(){

    //abstract class cannot have object
      student s;
      s.func();

    return 0;
}