// Find the factorial of a given number using function.

#include<stdio.h>

int factorial(int n){
    int i ,fact = 1;
    
    printf("Enter the numbers whos factorial you want to see\n");
    scanf("%d",&n);
    for(i = 1 ; i<=n;i++){
        fact = fact * i ;
    }
    printf("The factorial of the number is %d ", fact);
}
int main(){
    int num;
    factorial(num);

    return 0;
}



