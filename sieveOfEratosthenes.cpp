#include<iostream>
#include<algorithm>
using namespace std;

void sieveOfEratosthenes(int m){
    int arr[150]={0};

    for(int i=2;i<m;i++){
        if(arr[i]==0){
            for(int j=i*i;j<m;j=j+i){   
                arr[j]=1;
            }
        }
    }

    for(int i=2;i<m;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter the range starting from 0 (for ex : 50) : "<<endl;
    cin>>n;
    sieveOfEratosthenes(n);
    return 0;
}