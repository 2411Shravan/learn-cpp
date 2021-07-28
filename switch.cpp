#include<iostream>

using namespace std;

int main(){

    cout<<"Demonstrating the usage of SWITCH statement\n"<<endl;

    char c;
    int res;
    int num1,num2;
    cout<<"Please enter an operation to be performed (ex:- +,-,/,*)"<<endl;
    cin>>c;
    cout<<"Please enter first number"<<endl;
    cin>>num1;
    cout<<"Please emter the number 2"<<endl;
    cin>>num2;
    switch (c)
    {
    case '+':
        
             res=num1+num2;
            cout<<res<<endl;
            break;

    case '-':
        
             res=num1-num2;
            cout<<res<<endl;
            break;

    case '*':
        
             res=num1*num2;
            cout<<res<<endl;
            break;

    case '/':
        
             res=num1/num2;
            cout<<res<<endl;
            break;
    
    default:

        cout<<"Invalid op input"<<endl;
        break;
    }





}