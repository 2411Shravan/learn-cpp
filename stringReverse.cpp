#include<bits/stdc++.h>


using namespace std;

void reverseString(string& nms){
    int n=nms.length();

    for(int i=0;i<n/2;i++){
        swap(nms[i],nms[n-i-1]);
    }
}

int main(){
    string name="Shravan";
    reverseString(name);
    cout<<name<<endl;
}