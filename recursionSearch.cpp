#include<iostream>
#include<algorithm>


using namespace std;

int findelement(int ar[],int size,int i,int key){
    if(i==size){
        return -1;
    }
    if(ar[i]==key){
        return i;
    }
    return findelement(ar,size,i+1,key);
}

int main(){
    int arr[]={1,2,34,43,56,76};
    int ans=findelement(arr,6,0,43);
    cout<<ans<<endl;
}

