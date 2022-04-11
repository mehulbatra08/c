//  Write a program in C to display the cube of the number upto given an integer.

#include<stdio.h>

int main(){
    int a,n,cube;
    printf("Enter a number\n");
    scanf("%d",&n);
    for( a=1 ;a<=n; a++){
    cube = (a*a*a);

    printf("The value of number %d is %d\n",a,cube);
    }

    return 0;
}





