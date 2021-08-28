#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s1="shravan IS Programming NOw";
    string s2="SHrAvan is Programming";
    
    for(int i=0;i<s1.size();i++){
        if(s1[i]>='a' && s1[i]<='z'){
            s1[i]-=32;
        }
       
    }   

    for(int i=0;i<s2.size();i++){
         if(s2[i]>='A' && s2[i]<='Z'){
            s2[i]+=32;
        }
    }
    cout<<s1<<endl; 
    cout<<s2<<endl; 
}
