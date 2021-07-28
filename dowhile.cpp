#include <iostream>


using namespace std;

int main(){
    cout<<"Demonstration of do-while loop"<<endl;
    int number=50;
    int loop=0;
    
    do{
        cout<<"True"<<endl;
        number++;
    }while(number<=10);

    cout<<number<<endl;
}