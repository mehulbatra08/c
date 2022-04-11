// Write a c program to write first 50 numbers using recursion

#include<stdio.h>

void Rec(int n){
    if(n<=10){
        
        
        printf("%d\n",n);
        Rec(n+1);
    }

}



int main(){
    int n = 1;

    Rec(n);
    return 0;
}







