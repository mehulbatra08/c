// Find the simple interest of a number

#include<stdio.h>

int main(){
    int p,r,t,si;
    printf("Enter the value of P , R , T\n");
    scanf ("%d%d%d",&p ,&r, &t);
    si = (p*r*t)/100;
    printf("The value of simple interest is %d",si);
    

    return 0;
}


