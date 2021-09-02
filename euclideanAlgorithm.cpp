#include<iostream>
#include<algorithm>

using namespace std;

int euclidalgo(int c, int d){
    while(d!=0) {
        int rem=c%d;
        c=d;
        d=rem;
    }
    return c;
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(a<b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    ans=euclidalgo(a,b);
    cout<<ans<<endl;
}

