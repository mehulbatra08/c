// Write a program to change the value of a variable to ten times of its current value.
// Write a function and pass the value by reference



// Call by Reference mein address ki value pass hoti hai.
// Call by value mein variable ki apni value pass hoti hai.

#include <stdio.h>

void timeTen(int *addr){
    *addr = *addr * 10;

}

int main(){
    int value = 10 ;
    printf("Value of value var = %d\n",value);
    timeTen(&value);
    printf("Value of value var = %d\n",value);
    return 0;
}


