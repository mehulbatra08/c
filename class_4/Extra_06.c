// Write a program in C to display the pattern like right angle triangle using an asterisk

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1 ;j<=i;j++){
            printf("*");
            
        }
        printf("\n");
    }
}














