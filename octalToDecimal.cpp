#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>

using namespace std;

long octalToDecimal(long long);

int main(){
    long long a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    long final_result = octalToDecimal(a);
    cout<<final_result;
}

long octalToDecimal(long long z){
    long sum=0;
    int i=0;
    while(z!=0){
        int r=z%10;
      //  cout<<r<<endl;
        
        sum=sum+(r*pow(8,i));
        //cout<<sum<<endl;
        i++;
        z=z/10;
    }
    return sum;
}