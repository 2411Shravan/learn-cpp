#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1="abcde";
    string s2="abcdef";

    if(!s1.compare(s2)){
        cout<<"Strings are same"<<endl;
    }
    else{
        cout<<"Strings are different"<<endl;
    }
    
}