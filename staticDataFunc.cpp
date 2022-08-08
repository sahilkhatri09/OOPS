#include<iostream>
using namespace std;
class emplyoee{
    //declared inside defined outside
    static int count;
    public:
    int id;
    void setid(){
        count++;
    }
   static void getCount();
};
void emplyoee :: getCount(){
    // can be even inside class
    cout<<count<<endl;
}
// intialize only outside the class
// class property not object property
int emplyoee :: count = 10;
int main(){
     emplyoee e1;
     emplyoee e2;
     e1.setid();
     e2.setid();
     emplyoee :: getCount();
    return 0;
}