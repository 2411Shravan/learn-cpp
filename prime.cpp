#include<iostream>

using namespace std;


int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    bool flag=0;

    for(int i=2;i<a;i++){
            if(a%i==0){
                flag=1;
                cout<<"It's not a prime number"<<endl;
                break; 
            }
    }
    if(flag==0){
        cout<<"It's a prime number"<<endl;
    }



}