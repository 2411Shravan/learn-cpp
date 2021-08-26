#include<iostream>
#include<algorithm>

using namespace std;



int main(){
    cout<<"what is the length of the string that you enter : "<<endl;
    int a;
    cin>>a;
    char c[a+1];
    cin>>c;
    char temp[a+1];

    char check[10000];
    int i;
    int j=0;                               
    
    
    int res=1;
    
    for(int i=0;i<a;i++){
        if(c[i]!=c[a-1-i]){
            res=0;
            break;
        }
        else{
            continue;
        }
        
    }
    if(res){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not a palindrome"<<endl;
    }
   
    // cout<<temp<<endl;
    // cout<<check<<endl;
    
}