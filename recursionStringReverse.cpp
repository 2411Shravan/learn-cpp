#include<bits/stdc++.h>


using namespace std;

void Strrev(string nam){
    if(nam.length()==0){
        return;
    }

    string reve=nam.substr(1);
    Strrev(reve);
    cout<<nam[0];
}


int main(){
    string name="shravan";
    Strrev(name);

}