#include<iostream>
#include<algorithm>

using namespace std;


int inclusionExclusion(int m,int c,int d){
    int one=m/c;
    int two=m/d;
    int three=m/(c*d);
    return one+two-three;
}


int main(){
    int n,a,b;

    cin>>n>>a>>b;
  int final_ans = inclusionExclusion(n,a,b);
    cout<<final_ans<<endl;
}