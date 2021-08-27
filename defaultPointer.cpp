#include<iostream>

using namespace std;

int main(){
    int ar[]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        cout<<*(ar+i)<<endl;
    }


}