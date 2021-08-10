#include<iostream>

using namespace std;
int fact(int );

int main(){
    int n,r;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Enter r : "<<endl;
    cin>>r;

    int ans = fact(n)/(fact(n-r)*fact(r)); 
    cout<<ans<<endl;
}

int fact(int z){

    int factorial = 1;
    for(int i=2;i<=z;i++){
        factorial = factorial*i;
    }
    return factorial;

}