#include<stdio.h>

void printNtoOne(int n)
{
    if(n>=1){
        printf("%d ",n);
        printNtoOne(n-1);
    }
}

void printOnetoN(int n){
    if(n>=2){
        printOnetoN(n-1);
        printf("%d ",n);

    }
}


int main(){
    printNtoOne(4);
    printOnetoN(4);
}