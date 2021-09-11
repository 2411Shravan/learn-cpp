#include<iostream>
#include<algorithm>

using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int a;
    cin>>a;
    int ans;
    ans=sum(a);
    cout<<ans<<endl;

}