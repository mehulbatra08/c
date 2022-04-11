// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

#include<stdio.h>

int main(){
    int radius,height;

    printf("What is the radius?");
    scanf("%d", &radius);

    printf("what is the height?");
    scanf("%d",&height);
    int area = 3.14*radius*radius;
    printf("The area of circle is %d", area );

    int volume = 3.14*radius*radius*height;
    printf("The volume of cylinder is%d",volume);
    
    
    
    return 0;
}






















