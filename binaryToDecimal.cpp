#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

long binaryToDecimal(long long);

int main(){

    
    long long a;
    

    cout<<"Enter the number : "<<endl;
    cin>>a;
    binaryToDecimal(a);

    
}

long binaryToDecimal(long long z){
    int count=0;
    int sum=0;
    int i=0;
    while(z!=0){
        
        int r = z%10;
        sum=sum+(r*pow(2,i));
        // cout<<i<<endl;
        i++;
        
        // count++;
        z=z/10;
        // cout<<z<<endl;
    }
    // cout<<count<<endl;
   cout<<sum<<endl;
}