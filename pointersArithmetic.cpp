#include<iostream>

using namespace std;

int main(){
    int a=100;
    int *ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
}