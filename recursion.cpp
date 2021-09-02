#include<iostream>

using namespace std;

int recur(int j){
    if(j==0){
        return 0;

    }

    int next=recur(j-1);
    return j+next;
}
int main(){
    int a;
    cin>>a;
    cout<<recur(a)<<endl;
}