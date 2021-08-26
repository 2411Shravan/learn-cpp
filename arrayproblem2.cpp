


#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int a;
    cout<<"Enter the size the array : "<<endl;
    cin >> a;
    int arr[a+1];
    arr[a]=-1;
    cout<<"Enter the elements to the array : "<<endl;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int count=0;
    int maximumElement=-1;


    cout<<"Record breaking numbers are "<<endl;
    if(a==1){
        cout<<1<<endl;
    }
    else{
        for(int i=0;i<a;i++){
            if(arr[i]>maximumElement && arr[i]>arr[i+1]){
                count++;
                cout<<arr[i]<<endl;
            }
            
            maximumElement=max(maximumElement,arr[i]);
            
        }
    }

    cout<<"Total record breaking numbers are : "<<count<<endl;

}

