//Find the Lucas series of a number input by the user.
// What is a Lucas Series ?
// 2 1 3 4 7 11 18
// 2+1 = 3
// 3+4 = 7 and so on....



#include<stdio.h>

int LucasRecursion(int n){

    if(n==0){
        return 2;   // This is just the rule for lucas

    }
    if(n==1){
        return 1;   // This is just the rule of lucas 
    }
    return LucasRecursion(n-1) + LucasRecursion(n-2);

}

int main(){
    int number;
    int FinalLucas;
    printf("Enter the number\n");
    scanf("%d",&number);

    FinalLucas = printf("The final Lucas Recursion number is %d", LucasRecursion(number));
    return 0;
}




