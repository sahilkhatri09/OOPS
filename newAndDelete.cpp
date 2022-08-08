#include<iostream>
using namespace std;

int main(){
    int *a = new int(4);
    cout<<*a<<endl;
    delete a;
    int *arr = new int[4];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    cout<<*arr<<endl;
    arr++;
    cout<<*arr<<endl;
    // delete[] arr;
    // cout<<arr[1]<<endl;

    return 0;
}