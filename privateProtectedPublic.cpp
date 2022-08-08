#include<iostream>
using namespace std;
class base{
    private : int data1;
    public :int data2;
    protected: int data3;
};
class derived1 : protected base {
     public:
      void setData(){
        // data1 =1;
        data2 = 2;
        data3 = 3;
      }
      void getData(){
        cout<<data2<<" "<<data3<<endl;
      }
};
class derived2 : public base{
    public :
    void setData(){
        data3 = 3;
    }
    void getData(){
        cout<<data2<<" "<<data3<<endl;
    }
};
class derived3 : private base{
       public:
       void setData(){
        data2 = 2;
        data3 = 3;
       }
       void getData(){
        cout<<data2<<" "<<data3<<endl;
       }
};
int main(){
     derived1 d1;
     d1.setData();
     d1.getData();
     derived2 d2;
     d2.setData();
     d2.data2 = 2;
     d2.getData();
     derived3 d3;
     d3.setData();
     d3.getData();
    return 0;
}