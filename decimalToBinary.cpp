#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>


using namespace std;

long decimalToBin(long long);

int main(){
    long long a;
    cout<<"Enter the decimal number : "<<endl;
    cin>>a;
    decimalToBin(a);
}

long decimalToBin(long long z){
    string final_decimal = "";
    while(z!=0) {
        int r= z%2;
        string le = to_string(r);
        final_decimal+=le;
       // cout<<r<<endl;
        z=z/2;
    }
    reverse(final_decimal.begin(), final_decimal.end());
    cout<<final_decimal<<endl;
}