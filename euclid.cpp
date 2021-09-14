#include<iostream>

using namespace std;
int euclidalgo(int m, int n){
    if(n>m){
        int temp=0;
        temp=m;
        m=n;
        n=temp;
    }
    int rem;
    while(n>0){
        rem=m%n;
        m=n;
        n=rem;
    }
    return m;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int ans=euclidalgo(a,b);
    cout<<ans<<endl;
}