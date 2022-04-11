// write a program to find the force of attraction on a body of mass m
// f = mg
#include<stdio.h>

physics(int m ){
    int f;
    f = m * 9.8 ;
    return f;
    
}

int main(){
    int force , mass , g;

    printf("Enter the value of mass\n");
    scanf("%d",&mass);
    printf("The value of force is %d\n",physics(mass));
    return 0;
}







