#include<iostream>

using namespace std;
int fact(int);
int main(){
    int a;
    cout<<"Enter the number : "<<endl;
    cin>>a;

    long long ans= fact(a);
    cout<<ans<<endl;

}

int fact(int z){

    long long factorial=1;

    for(int i=2;i<=z;i++){
        factorial = factorial*i; 
    }
    return factorial;

}