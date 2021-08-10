#include <string>
#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;
string deciToOctal(long long);

int main(){
    long long e;
    cout<<"Enter the decimal number : "<<endl;
    cin>>e;
   
   string answer= deciToOctal(e);
   cout<<answer<<endl;
}

string deciToOctal(long long z){
    string final_def="";

    while(z!=0){
        int r = z%8;
        string le = to_string(r);
        final_def += le;
        z=z/8;
    }
    reverse(final_def.begin(), final_def.end());

    return final_def;
}