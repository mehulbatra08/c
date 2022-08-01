// Write a program that initializes 2 variables (of Integer type):

// grade1.

// grade2.

// The program should print the VALUE and the ADDRESS of each of these variables.



#include<stdio.h>

int main(){
    int grade1 = 55;
    int grade2 = 60;

    printf("The value of address of grade1 is %p\n",&grade1);
    printf("The value of address of grade2 is %p\n",&grade2);
    printf("The value of grade1 is %d\n",grade1);
    printf("The value of grade2 is %d\n",grade2);
    

    
    
    return 0;
}


