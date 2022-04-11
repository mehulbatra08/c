#include<stdio.h>

int main(){
    int i = 0;
    do{
        printf("The value of i is %d\n",i);
        i++;
        if(i==98){
        break;
        }
    }while(i<1000);
    return 0;
}


