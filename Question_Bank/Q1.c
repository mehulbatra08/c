// Find the area and circumference of a circle  

#include<stdio.h>

int main(){
    int r,area;

    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    
    area = r*r*3.14;
    printf("The Area of circle is %d",area);
    return 0;
}


