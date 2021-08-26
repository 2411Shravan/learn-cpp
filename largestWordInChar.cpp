#include<iostream>
#include<algorithm>

using namespace std;

int main(){
   


    char c[1000];
    cin.getline(c,sizeof(c));
  
    cout<<c<<endl;

    int count=0;
    int maxi=0;
    int i=0;
    while(true){

        if(c[i]==' ' || c[i]=='\0'){
            if(count>maxi){
                maxi=count;
            }
            count=0;
        }
        else{
            count++;
        }
        if(c[i]=='\0'){
            break;
        }

        i++;
    }
    cout<<maxi<<endl;
}