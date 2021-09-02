#include<iostream>

using namespace std;


int prod(int m, int n){
    if(n==0){
        return 1;

    }

    int req=prod(m,n-1);
    return m*req;
}

int main(){

    int a,b;
    cin>>a;
    cin>>b;
    int ans=prod(a,b);
    cout<<ans<<endl;
}