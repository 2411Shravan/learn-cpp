#include<iostream>
#include<algorithm>

using namespace std;
int binarySearch(int array[],int size,int key);


int main(){
    int a;
    cout<<"Enter the size of the array : "<<endl;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cout<<"Enter the "<<i+1<<"th element : "<<endl;
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key : "<<endl;
    cin>>key;
    int res=binarySearch(arr,a,key);
    if(res>=0){
        cout<<"Element found at position "<<key<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}

int binarySearch(int array[],int size,int key){

    int start=0;
    int end=size;
    while(start<=end){
        int mid;
        mid=(start+end)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]<key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
}

return -1;
}