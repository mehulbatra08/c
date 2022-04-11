// Find the area of triangle using c 

#include<stdio.h>

int main(){
    int l,b,area;
    printf("Enter the Length and Breadth of Triangle\n");
    scanf("%d",&l);
    scanf("%d",&b);

    area = (l*b)/2;
    printf("The area of Triangle is %d",area);

    return 0;
}


