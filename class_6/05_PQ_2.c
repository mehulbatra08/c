// Write a program having a variable i . Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?


#include<stdio.h>

void printAdd(int a); // This is just a function declaration

int main(){
    int i;
    printf("The address of i is %u\n",&i);
    printAdd(i);

    return 0;
}

void printAdd(int a){
    printf("The address of variable a is %u\n", &a);



     
}


