#include<iostream>
#include<algorithm>

using namespace std;


int fact(int b){
   if(b==1){
       return 1;
   }

   int req=fact(b-1);
    return req*b;
}


int main(){
    int a;
    cin>>a;
    int ans=fact(a);
    cout<<ans<<endl;
}