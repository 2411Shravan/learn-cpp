#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;



int main(){
    int a;
    cout<<"Enter the array size : "<<endl;
    cin>>a;
    int arr[a];
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0; i<a; i++){
        cout<<"Enter the "<<i+1<<" th input"<<endl;
        cin>>arr[i];
    }
  
    for(int i=0;i<a;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

        for(int i=0;i<a;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
   cout<<"The maximum value is "<<max<<endl;
   cout<<"The minimum value is "<<min<<endl;
   
    
}

// void* findMinMax(int array[], int r){

// int max=INT_MIN;
// int size=2;
// int min=INT_MAX;
//     for(int i=0;i<r;i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//     }

//         for(int i=0;i<r;i++){
//         if(array[i]<min){
//             min=array[i];
//         }
//     }
    
//    cout<<"The maximum value is "<<max<<endl;
//    cout<<"The minimum value is "<<min<<endl;

// }