#include<iostream>
#include<algorithm>


using namespace std;

string reverseStr(string go){
    int n=go.length();

    for(int i=0;i<n/2;i++){
        swap(go[i],go[n-i-1]);
    }

    return go;
}

int main(){
    string name="ShravanGeek";
   string ans= reverseStr(name);
   cout<<ans<<endl;
}