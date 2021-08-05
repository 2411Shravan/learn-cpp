#include<iostream>
#include<algorithm>



using namespace std;

void replaceStr(string nm){
    if(nm.length()==0){
        return;
    }
    if(nm[0]=='p' && nm[1]=='i'){
        cout<<"3.14 ";
        replaceStr(nm.substr(2));
    }
    else{
        cout<<nm[0];
        replaceStr(nm.substr(1));
    }
}

int main(){
    string name="pipippppipipipipipppippipi";
    replaceStr(name);
}