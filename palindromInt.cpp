#include<iostream>


using namespace std;

bool palindrome(int m){
    int r=0;
    int re=m;
    while(m>0){
        int s=m%10;
        r=r*10+s;
        m=m/10;
       
    }

    if(re==r){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    int a;
    cin>>a;
   bool ans= palindrome(a);
   cout<<ans<<endl;
}


