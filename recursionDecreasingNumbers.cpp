#include<iostream>
#include<algorithm>

using namespace std;

void display(int m){
    if(m<0){
        exit(0);
    }
    cout<<m<<endl;
    display(m-1);
}
int main(){
    int a;
    cin>>a;
    display(a);

}