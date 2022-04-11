// Write a program in C to display the pattern like right angle triangle with a number.

#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter the number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){

        
        printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}


