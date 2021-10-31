#include<iostream>
#include<vector>
#include<algorithm>


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

    //traversing vector data in cpp 2nd way

    vector<int>::iterator it;

    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    for(auto element:v){
        cout<<element<<endl;
    }

    //popping element in vector

    v.pop_back();
    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    v.push_back(4);
    v.push_back(5);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    vector<int> avg(3,65);

    for(int i=0;i<avg.size();i++){
        cout<<avg[i]<<endl;
    }


    swap(v,avg);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    

    return 0;
}