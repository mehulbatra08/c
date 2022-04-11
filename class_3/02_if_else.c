#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=90){
        printf("You are above 90,you cannot drive");      //if (age!=90) This means age is NOT equal to 90
    }
    else{
        printf("You can drive\n");
    }

    if(age==50){
        printf("Congrats!Half Century");
    }
    return 0;
}


