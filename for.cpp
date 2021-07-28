#include<iostream>

using namespace std;

int main(){
    int N;
    cout<<"Addition of first N umbers"<<endl;
    cin>>N;

    int sum=0;

    for(int i=0;i<N;i++){
        sum=sum+(i+1);
    }

    cout<<"The addition of first "<<N<<" numbers is "<<sum<<endl;

}