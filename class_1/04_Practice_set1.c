// Write a c program to calculate area of a rectangle
#include <stdio.h>

int main(){
    
    int a,b;
    printf("Enter the length of rectangle\n ");
    scanf("%d", &a);

    printf("Enter the breadth of rectangle\n");
    scanf("%d", &b);
    int area = a*b;

    printf("The area of rectangle is %d",area);
    return 0;

}
