#include <iostream>


using namespace std;

int main(){
    int stages;
    cout<<"Enter required stages"<<endl;
    cin>>stages;

    while(stages){
        int i;
        for ( i = 0; i < stages; i++)
        {
           cout<<"*";
        }
        cout<<endl;
        stages--;
        
    }
}