// Calculate the area of the rectangle using funtions


#include<stdio.h>

float areaRect(float l , float b ){

    float area;
   

    area = (l*b);
    return area;

    

}


int main(){
    float length,breath ;
    


     printf("Enter the value of length and breadth\n");
    scanf ("%f%f",&length,&breath);

    printf("The area of rectangle is %f",areaRect(length,breath));

    return 0;
}


