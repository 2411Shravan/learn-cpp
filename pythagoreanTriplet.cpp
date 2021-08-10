#include<iostream>
#include<algorithm>
#include<math.h>


using namespace std;

int check(int,int,int);


int main(){
    int a,b,c;
    cout<<"Enter the value of first edge : "<<endl;
    cin>>a;
    cout<<"Enter the value of second edge : "<<endl;
    cin>>b;
    cout<<"Enter the value of third edge : "<<endl;
    cin>>c;

    int answer =check(a,b,c);
    if(answer){
        cout<<"Entered number is a pythagorean triplet"<<endl;
    }
    else{
        cout<<"Entered number is not a pythagorean triplet"<<endl;
    }
}

int check(int x,int y,int z){
    int a = max(x,max(y,z));
    int b,c;
   
    if(a==x){
            b=y;
            c=z;
            int res;
        res=(pow(b,2))+(pow(c,2));
        int result=a*a;

        if(result == res){
            return 1;
        }
        else{
            return 0;
        }
        cout<<a<<b<<c;
    }

    else if(a==y){
        b=x;
        c=z;
            int res;
        res=(pow(b,2))+(pow(c,2));
        int result=a*a;

        if(result == res){
            return 1;
        }
        else{
            return 0;
        }
        cout<<a<<b<<c;
    }
    else{
            b=x;
            c=y;
            int res;
        res=(pow(b,2))+(pow(c,2));
        int result=a*a;

            if(result == res){
                return 1;
            }
            else{
                return 0;
            }
        cout<<a<<b<<c;
    }

    
}