#include<iostream>
using namespace std;
class grandf{
    public:
    int a;
    void seta(int b){
        a = b;
    }
    void geta() {cout<<a<<endl;}

};
class f1 : virtual public grandf{

};
class f2 : virtual public grandf{

};
class son : public f1,public f2{
   public :
   
};
int main(){
    son k;
    k.seta(3);
    k.geta();

    return 0;
}