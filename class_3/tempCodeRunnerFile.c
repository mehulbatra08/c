// Find the greatest of 4 numbers

#include<stdio.h>

int main(){
    int num1,num2,num3,num4;
    printf("Enter num1\n");
    scanf("%d",&num1);

    printf("Enter num2\n");
    scanf("%d",&num2);

    printf("Enter num3\n");
    scanf("%d",&num3);

    printf("Enter num4\n");
    scanf("%d",&num4);

    if (num1>num2 && num2>num3 && num3>num4);
    {
    printf("Num1 is the greatest");
    }

    else
    printf{("no number is the greatest");
    }
   
    
    return 0;
}