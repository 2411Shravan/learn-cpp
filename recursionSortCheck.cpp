#include<iostream>
#include<algorithm>

using namespace std;

bool check(int arra[],int n){
    if(n==1){
        return true;
    }
    bool ans=check(arra+1,n-1);
    return (arra[0]<=arra[1] && ans);
}

int main(){
    int arr[]={1,2,4,4,5,6,7};

    cout<<check(arr,7)<<endl;
}