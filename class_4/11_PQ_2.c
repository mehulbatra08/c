// Write a program to write the multiplication table of a given number n in reverse order


#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the number whos multiplication table you want to see\n");
    scanf("%d",&n);
    for(i=n;i;i--){
       int p = i*n;
        printf("%d * %d = %d\n",n,i,p );
    }
    return 0;
}




