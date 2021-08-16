#include<iostream>
#include<algorithm>

using namespace std;
int linearsearch(int array[],int size,int element);
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int key;
    int arry[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" th element"<<endl;
        cin>>arry[i];
    }
    cout<<"Enter the key element"<<endl;
    cin>>key;
  int res= linearsearch(arry,n,key);
  if(res>=0){
      cout<<"Element found at position "<<res<<endl;
  }
  else{
      cout<<"Element not found"<<endl;
  }
  return 0;
}

int linearsearch(int array[],int size,int element){
    for(int i=0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}