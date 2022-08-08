#include<iostream>
using namespace std;
class complex{
    
    public:
    int real,imag;
    complex operator+ (complex a){
        complex temp(0,0);
        temp.real = a.real + real;
        temp.imag = a.imag + imag;
        return temp;
    }
    complex operator- (){
        complex temp(0,0);
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }
    complex(int a,int b){
        real = a;
        imag = b;
    }

};
int main(){
  complex a(2,3),b(34,3),c(0,0);
   c = a.operator+ (b);
   c = a + (b);
   complex d(0,0);
   c = -c;
   cout<<c.real;
   cout<<endl<<c.imag;

}