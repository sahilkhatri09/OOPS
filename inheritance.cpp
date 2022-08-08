#include<iostream>
using namespace std;
class employee{
     public:
     int id;
     employee(int ide){
        id = ide;
     }

     //derive class automatically call constructor of base class
     employee(){};
};

//if not public writtern then by default private
class programmer : public employee{
    public:
    int lang ;
    programmer(int a){
        id = a;
        lang = 3;
    }
};
int main(){
     
     programmer p1(4);
     cout<<p1.id<<endl;
     cout<<p1.lang<<endl;
    return 0;
}