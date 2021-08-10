#include<iostream>

using namespace std;
int sum(int);

int main(){
    int a;
    cin>>a;
    int ans = sum(a);
    cout<<ans;
}

int sum(int r){
    int i;
    int init_sum=0;
    for(int i=0;i<=r;i++){
        init_sum+=i;
    }

    return init_sum;
}