#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int a,b;
    cout<<"Enter the rows : "<<endl;
    cin>>a;
    cout<<"Enter the columns : "<<endl;
    cin>>b;
    int matrix[a][b];

    for(int i=0; i<a; i++){
        for(int j=0;j<b;j++){
            cin>>matrix[i][j];
        }
    }

      for(int i=0; i<a; i++){
        for(int j=0;j<b;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int rowStart = 0;
    int colStart = 0;
    int rowEnd = a-1;
    int colEnd=b-1;

    while(rowStart <= rowEnd && colStart <= colEnd){



        for(int col=colStart; col <= colEnd;col++){
            cout<<matrix[rowStart][col]<<" ";
        }
        rowStart++;
        for(int row=rowStart; row <= rowEnd; row++){
            cout<<matrix[row][colEnd]<<" ";
        }
        colEnd--;
        for(int col=colEnd; col >= colStart; col--){
        cout<<matrix[rowEnd][col]<<" ";
        }
        rowEnd--;
        for(int row=rowEnd; row >= rowStart; row--){
            cout<<matrix[row][colStart]<<" ";
        }
        colStart++;
    }
}