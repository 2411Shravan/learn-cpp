#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    int reverseNum=0;

    while(number>0){
        int n=number%10;
        reverseNum = reverseNum*10 + n;
        number = number/10;
    }
    cout<<"The reverse of entered number is "<<reverseNum<<endl;

}