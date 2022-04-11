#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("enter the value fo b\n");
    scanf("%d", &b); 
    //  %b means address of b means that supplied value should be copied to the address which is indicated by variable b

    printf("The sum of a and b is  %d ",a+b);

    return 0;


}