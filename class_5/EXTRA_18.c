// Write a program using funtions to print the following patter.

// *
// **
// ***
// ****
// *****

#include<stdio.h>
int pattern(int n){
int j;
int i;
    for(i=1;i<=(2*n-1);i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");

        
        
    }
    
    

    
}
int main(){
    int number;
    int final;

    printf("Enter the number of star lines you want\n");
    scanf("%d",&number);
    final = pattern(number);

    printf("%d",final);
    return 0;
}


