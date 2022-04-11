// Write a program in C to display the multiplication table of a given integer.

#include<stdio.h>

int main(){
    int a,n,product;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(a=1; a<=n; a++){
    product = (a*n);

    printf("%d X %d = %d\n" , n,a,product);
        
    }
    return 0;
}


