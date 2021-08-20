#include<algorithm>
#include<iostream>


using namespace std;

int main(){
    int a;
    
    cout<<"Enter the size of array"<<endl;
    cin>>a;
    int arr[a];
    int dif[a-1];
    int counts[a-1];
    int k=0;
    int j=2;
    int cur=2;
    int ans=2;
   
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    cout<<"Limits00"<<endl;
    int pd=arr[1]-arr[0];
  

    while(j<a){
        cout<<"Limits001"<<endl;
        if(pd==arr[j]-arr[j-1]){
            cur++;
        }
        else{
            pd=arr[j]-arr[j-1];
            cur=2;
        }
        j++;
        ans=max(ans,cur);
    }
    cout<<"debug"<<endl;
    cout<<ans<<endl;
}