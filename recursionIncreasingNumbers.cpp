#include<iostream>
#include<algorithm>

using namespace std;

void display(int c,int m){
  

    if(m>c){
        exit(0);
    }
    cout<<m<<endl;

    display(c,m+1);
}

int main(){
    int b;
    cin>>b;
    display(b,1);


}