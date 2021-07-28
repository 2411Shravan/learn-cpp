#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"First integer is greater"<<endl;
        }
        else{
            cout<<"Third integer is greater"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"Second integer is greater"<<endl;
        }
        else{
            cout<<"Third integer is greater"<<endl;
        }
    }




}