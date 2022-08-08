#include<iostream>
using namespace std;
class complex{
    int a,b;
    // in private or public no difference
    friend complex sum(complex,complex);
    public:
    
    void setData(int a1,int b1){
        a = a1;
        b = b1;
    }
    void getData(){
        cout<<a<<" + i"<<b<<endl; 
    }
};

//this is not part of class you cannot c1.sum is in valid;
//just a function who can access private membet outside the class
complex sum(complex a1,complex b1){
    complex c;
    int x = a1.a + b1.a;
    int y = a1.b + b1.b;
    c.setData( x , y);
    return c;
};
int main(){
     complex a,b;
     a.setData(1,2);
     b.setData(1,2);
     a.getData();
     b.getData();
     sum(a,b).getData();
    return 0;
}