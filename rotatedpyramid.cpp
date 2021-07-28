#include<iostream>

using namespace std;

int main(){
    int stages;
    cout<<"Enter number of stages : "<<endl;
    cin>>stages;
    int i=0;
    
       
        int p=0;
        int q=0;
        for(p=0;p<=stages;p++){
            for(q=0;q<=stages;q++){
               if(q<=stages-p){
                   cout<<" ";
               }
               else{
                   cout<<"*";
               }
            }
            cout<<endl;
        }
    
}