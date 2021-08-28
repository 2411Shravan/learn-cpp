#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1="Shravan";
    cout<<s1<<endl;
    s1.clear();


    if(s1.empty()){
        cout<<"String is empty"<<endl;
    }
    else{
        cout<<"Not cleared"<<endl;
    }
}