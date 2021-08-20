#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];

    for(int i=0; i<a; i++){
        cin>>arr[i];
        
    }

    for(int i=0; i<a; i++){
        int sum=0;
        for(int j=i; j<a; j++){
            sum=sum+arr[j];
            cout<<sum<<endl;
        }
    }
}