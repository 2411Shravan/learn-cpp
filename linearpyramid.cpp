#include<iostream>
using namespace std;
 
int main(){
    int stages;
    cout<<"Enter the stages"<<endl;
    cin>>stages;
    int i=0;
    while(i<stages){
        int j;
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        i++;
        cout<<endl;
    }

}