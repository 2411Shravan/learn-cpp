#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void selectionSort(int arr[],int size);

int main(){
    int n;
    cout<<"Please enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" th element : ";
        cin>>arr[i];
    }

    selectionSort(arr,n);
}

void selectionSort(int arr[],int size){

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
}