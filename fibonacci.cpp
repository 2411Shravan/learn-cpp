#include<iostream>

using namespace std;

void fibonacci(int);

int main(){
    int a;
    cout<<"Please enter the range numer"<<endl;
    cin>>a;
    fibonacci(a);
}

void fibonacci(int r){
    int t1=0;
    int t2=1;
    int nexTerm;


    for(int i=0;i<r;i++){
        
        cout<<t1<<endl;
        nexTerm=t1+t2;
        t1=t2;
        t2=nexTerm;

    }
}