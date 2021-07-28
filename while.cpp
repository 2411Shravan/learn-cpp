#include<iostream>

using namespace std;
int main(){

    while(true){
        int num;
        int num1;
        cout<<"Pick a random number and compiler will say whether it's even or odd"<<endl;
        cin>>num;
        if(num%2==0){
            cout<<"Picked number is even"<<endl;
        }
        else{
            cout<<"Picked number is odd"<<endl;
        }
        cout<<"Do you want to continue? enter 1 to continue and 0 to stop"<<endl;
        cin>>num1;
        if(num1){
            continue;
        }
        else{
            break;
        }
    }


}