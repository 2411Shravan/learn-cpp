#include<iostream>
using namespace std;

int isPrime(int);

int main(){
    int a,b;
    cout<<"Please enter first number"<<endl;
    cin>>a;
    cout<<"Please enter second number"<<endl;
    cin>>b;

    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}

int isPrime(int z){
   
        for(int i=2;i<z;i++){
            if(z%i==0){
                return 0;
                break;
            }
        }
  

    return 1;
}