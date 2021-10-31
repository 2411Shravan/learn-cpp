#include<iostream>
#include<vector>

using namespace std;


int main(){
    //declaring vectors

    vector<int> v;
    //adding data to vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    //traversing vector data in cpp

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}