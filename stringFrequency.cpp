#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string name="shravanvaavvvvv";
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    for(int i=0;i<name.size();i++){
        arr[name[i]-'a']++;
    }
    char ans='a';
    int maxFrequency=0;

    for(int i=0;i<26;i++) {
      
        if(arr[i]>maxFrequency){
            maxFrequency=arr[i];
            ans=i+'a';
        }
    }

    cout<<"Maximum repeated character is "<<ans<<"Repeated times is : "<<maxFrequency<<endl;
}