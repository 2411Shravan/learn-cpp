#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

void ret_val(long long,long long);
void final_result(int,int);

int main(){
    long long a;
    long long b;
    cout<<"Enter first binary number : "<<endl;
    cin>>a;
    cout<<"Enter second binary number : "<<endl;
    cin>>b;
    ret_val(a,b);
  
}

void ret_val(long long x,long long y){
int sum1=0;
int i=0;
int sum2=0;
int ii=0;
while(x!=0){
 int r = x%10;
        sum1=sum1+(r*pow(2,i));
        // cout<<i<<endl;
        i++;
        
        // count++;
        x=x/10;
        // cout<<x<<endl;
}

while(y!=0){
 int r = y%10;
        sum2=sum2+(r*pow(2,ii));
        // cout<<i<<endl;
        ii++;
        
        // count++;
        y=y/10;
        // cout<<y<<endl;
}
final_result(sum1,sum2);

}


void final_result(int a,int b){
    int z=a+b;
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