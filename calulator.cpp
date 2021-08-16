#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main(){
    
    
    int a=1;

    while(a){
        int choice;
        cout<<"1.Add\n2.Subtract\n3.Divide\n4.Multiply\n"<<endl;
    cout<<"Enter your choice:\n"<<endl;
    cin>>choice;
        switch (choice)
        {
        case 1:
                int a;
                int b;
                cout<<"Please enter first number"<<endl;
                cin>>a;
                cout<<"Please enter second number"<<endl;
                cin>>b;
                int res;
                res=a+b;
                cout<<res<<endl;

            break;

        case 2:
                int aa;
                int bb;
                cout<<"Please enter first number"<<endl;
                cin>>aa;
                cout<<"Please enter second number"<<endl;
                cin>>bb;
                int resa;
                resa=aa-bb;
                cout<<resa<<endl;

            break;

        case 3:
                int aaa;
                int bbb;
                cout<<"Please enter first number"<<endl;
                cin>>aaa;
                cout<<"Please enter second number"<<endl;
                cin>>bbb;
                int resaa;
                resaa=aaa/bbb;
                cout<<resaa<<endl;

            break;

        case 4:
                int az;
                int bz;
                cout<<"Please enter first number"<<endl;
                cin>>az;
                cout<<"Please enter second number"<<endl;
                cin>>bz;
                int resz;
                resz=az*bz;
                cout<<resz<<endl;

            break;
        
        default:
            cout<<"Invalid input\n"<<endl;
            break;
        }
        int z;
        cout<<"Do you wish to continue? (1 or 0)"<<endl;
        cin>>z;

        if(z==1){
            a=1;
        }
        else{
            a=0;
        }
    }

}