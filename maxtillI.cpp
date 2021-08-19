#include<iostream>
#include<algorithm>


using namespace std;


int main(){
    int a;
    cout<<"Enter the size of array"<<endl;
    cin>>a;
    int ar[a];
    int mx=-111111;
    for(int i=0;i<a;i++){
        cout<<"Enter the "<<i+1<<" th element"<<endl;
        cin>>ar[i];
        }
    int c=1;
    for(int i=0;i<a;i++){
        cout<<"comparing the "<<mx<<" and "<<ar[i]<<" th element"<<endl;
        mx=max(mx,ar[i]);
    }


    cout<<mx<<endl;
    
}
