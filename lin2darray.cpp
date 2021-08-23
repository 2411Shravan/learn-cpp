#include<iostream>
#include<algorithm>

using namespace std;





int main(){
    int a,b;
    cout<<"Please enter the number of rows : "<<endl;
    cin>>a;
    cout<<"Please enter the number of columns : "<<endl;
    cin>>b;
    int arr[a][b];
    int pos=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
         
        }
    }
    cout<<"Enter the key to be found : "<<endl;
    int key;
    cin>>key;
        bool flag=false;

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]==key){
                flag=true;
            }
        }
    }

    if(flag==true){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}

