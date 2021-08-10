#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;
string decimalToHexadecimal(long long);

int main(){
    long long e;
    cout<<"Enter the number"<<endl;
    cin>>e;
    string answer = decimalToHexadecimal(e);
    cout<<answer<<endl;
}

string decimalToHexadecimal(long long e){
    string le_final="";
    while(e!=0){
        int r=e%16;
        if(r<10){
                string le_name = to_string(r);
                le_final+=le_name;
                e=e/16;
        }
        else{
            if(r==10){
            string le_name="a";
            le_final+=le_name;
            e=e/16;
                }
        else if(r==11){
                string le_name="b";
                le_final+=le_name;
                 e=e/16;
        }
        else if(r==12)
        {
           string le_name="c";
            le_final+=le_name;
            e=e/16;
        }
        else if(r==13){
            string le_name="d";
            le_final+=le_name;
            e=e/16;
        }
        else if(r==14){
            string le_name="e";
            le_final+=le_name;
            e=e/16;
        }
        else if(r==15){
            string le_name="f";
            le_final+=le_name;
            e=e/16;
        }
        }
       
        
        
    }

    reverse(le_final.begin(),le_final.end());
    return le_final;
}