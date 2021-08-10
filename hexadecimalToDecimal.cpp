#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

long hexadecimalToDecimal(long long);

int main(){

    long long r;
    cout<<"Enter the hexa-decimal number : "<<endl;
    cin>>r;
   long answer = hexadecimalToDecimal(r);
   cout<<answer<<endl;
}

long hexadecimalToDecimal(long long v){
    int sum=0;
    int i=0;
    while(v!=0){
        int r=v%10;

        sum=sum+(r*pow(16,i));
        i++;
        v=v/10;
    }

    return sum;
}