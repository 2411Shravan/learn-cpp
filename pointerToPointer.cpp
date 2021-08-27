#include<iostream>

using namespace std;

int main(){
    int a=10;
    int *pt=&a;
    cout<<*pt<<endl;
    int **ptr=&pt;
    cout<<*ptr<<endl;
    cout<<**ptr<<endl;
}