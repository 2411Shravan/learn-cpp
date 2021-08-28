#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s1="shravan IS Programming NOw";
    string s2="SHrAvan is Programming";
    
    transform(s1.begin(), s1.end(), s1.begin(), :: toupper);
    transform(s2.begin(), s2.end(), s2.begin(), :: tolower);
    cout<<s1<<endl; 
    cout<<s2<<endl; 
}
