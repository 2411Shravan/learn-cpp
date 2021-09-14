#include<iostream>


using namespace std;
void printReverse(string go){
    int n=go.length();
    for(int i=n-1;i>=0;i--){
        cout<<go[i];
    }
}
int main(){
    string name="Shravanv";
    printReverse(name);
}