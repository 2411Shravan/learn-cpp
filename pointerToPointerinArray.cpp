#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int *ptr=arr;
    for(int i=0;i<7;i++){
        cout<<*(ptr+i)<<endl;
    }
    int **pt=&ptr;
    for(int i=0;i<7;i++){
        cout<<*(*pt+i)<<endl;
    }
}