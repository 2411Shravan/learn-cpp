#include<iostream>


using namespace std;

void swap(int *ptr1, int *ptr2){
    int temp=*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


int main(){
    int a,b;
    cin>>a;
    cin>>b;
    swap(&a,&b);
    cout<<"a: "<<a<<" b: "<<b<<endl;
}

