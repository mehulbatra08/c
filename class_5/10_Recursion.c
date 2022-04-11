#include<stdio.h>
int factorial(int x);
int main(){

   int a = 3;
    printf("The value of factorial %d is %d",a,factorial(3));

    
    return 0;
}

int factorial(int x){
    if (x == 0 || x ==1){
        return 1;

    }
    else{
            return (x * factorial(x-1));
    }
}

