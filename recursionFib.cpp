#include<iostream>

using namespace std;


int fibonacci(int b){
    if(b==0 || b==1){
        return b;
    }
    return fibonacci(b-1)+fibonacci(b-2);
}


int main(){
    int a;
    cin>>a;
    int final_ans;
    final_ans=fibonacci(a);
    cout<<final_ans<<endl;
}