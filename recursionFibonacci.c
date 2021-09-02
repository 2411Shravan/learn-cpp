#include<stdio.h>
#include<stdlib.h>

void printFibonacci(int n){
   static int n1=0;
   static int n2=1;
   static int n3;

    if(n>0){
        n3=n1+n2;
        
        n1=n2;
        n2=n3;
        printf("%d ",n3);
        printFibonacci(n-1);
    }
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d %d ",0,1);
    printFibonacci(a-2);
    return 0;

}


