#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int a,b;
    cout<<"Enter the number of rows : "<<endl;
    cin>>a;
    cout<<"Enter the number of columns : "<<endl;
    cin>>b;
    int arr[a][b];

        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>arr[i][j];
            }
        }

        cout<<"The matrix you've entered is : "<<endl;


        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<" "<<endl;
        }


}