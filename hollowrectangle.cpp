#include<iostream>

using namespace std;


int main(){

    int rows,cols;
    int i,j;
    cin>>rows;
    cin>>cols;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(i==0 || i==rows-1){
                cout<<"*";
            }
            else if(j==0 || j==cols-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<" "<<endl;
    }




    return 0;
}