#include<iostream>
using namespace std;
int main(){
	int i;
	cin>>i;
	try{
		if(i == 0){	
            string p = "sah";
			throw p;
		}
        cout<<10/i<<endl;
	}
	catch (int e){
		cout<<"int"<<endl;
	}
    catch (string s){
        cout<<"string"<<endl;
    }
	return 0;
}