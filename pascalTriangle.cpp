#include<iostream>

using namespace std;

int fact(int);
int main(){
    int row;
    cout<<"Enter the row : "<<endl;
    cin>>row;

    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<" "<<endl;
    }
}

int fact(int r){

int pascal=1;
    for(int i=2;i<=r;i++){
        pascal=pascal*i;
    }
return pascal;
}