#include<iostream>
#include<algorithm>
//pointers are the variables that stores address of other variables

using namespace std;

int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
