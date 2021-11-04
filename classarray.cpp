#include<bits/stdc++.h>
using namespace std;

class students{
    public:
    string name;
    int roll;
    int no;

    void printData(){
        cout<<"name : "<<name<<endl;
        cout<<"roll no : "<<roll<<endl;
        cout<<"number : "<<no<<endl;

       
    }
};

int main(){
    students a[3];

    for(int i=0;i<3;i++){
        cout<<"Enter name : "<<endl;
        cin>>a[i].name;
        cout<<"Enter the roll no : "<<endl;
        cin>>a[i].roll;
        cout<<"Enter number : "<<endl;
        cin>>a[i].no;

    }

    for(int i=0;i<3;i++){
        a[i].printData();
    }

    return 0;
}