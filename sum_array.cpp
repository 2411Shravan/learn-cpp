#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter the array size : "<<endl;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
       
    }
    for(int i=0;i<n;i++){
        sum=sum+array[i];
    }
    cout<<sum<<endl;
}