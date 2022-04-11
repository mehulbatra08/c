#include<stdio.h>

int main(){
    int r, n, sum =0;
    printf("Enter the value of a number\n");
    scanf("%d",&n);
    while(n>0){
    r = n%10;
    sum = sum + r;
    n = n/10;
    }
    printf("The sum of number is %d",sum);
    
    return 0;
}


