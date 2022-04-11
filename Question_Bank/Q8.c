// #calculate the average value b/w three numbers


#include<stdio.h>

float avgThree(int a, int b , int c){

    float average ;

    average = (a + b + c)/3.0;
    return average;



}

int main(){
    int a , b , c; 
    printf("Enter the three Grades\n");
    scanf("%d%d%d", &a,&b,&c);


    printf("The average of three numbers is %f\n ", avgThree(a,b,c));
    
    return 0;
}



