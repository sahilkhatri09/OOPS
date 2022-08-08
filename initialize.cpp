#include<iostream>
using namespace std;
class sahil{
    int a, b;
    public:
    // will work
    sahil(int i,int j) : a(i),b(j){
        cout<<a<<endl;
        cout<<b<<endl;
    }
    // this will also work
    // sahil(int i,int j): a(i),b(a+j){
    //      cout<<a<<endl;
    //      cout<<b<<endl;
    // }

    //this will not work
    // sahil(int i,int j): b(i),a(b+j){
    //     cout<<a<<endl;
    //     cout<<b<<endl;
    // }
    
};
int main(){
     sahil khatri(2,1);
    return 0;
}