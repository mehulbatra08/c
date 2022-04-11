#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);

    switch(marks/10)
    {
    case 10:
    case 9:
    printf("Your grade is A");
    break;
    case 8:
    printf("Your grade is B");
    break;
    case 7:
    printf("your grade is C");
    break;
    case 6:
    printf("your grade is D");
    break;
    case 5:
    printf("your grade is E");
    break;
    default:
    printf("Your grade is F");
    
    }
    return 0;

}







