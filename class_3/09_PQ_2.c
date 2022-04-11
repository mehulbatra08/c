// Write a program to find out wheather a student is pass or fail;If it requires total 40% and atleast 33% in each subject to pass.Assume 3 subjects and take marks as an input from the user
#include<stdio.h>

int main(){
    int maths;
    int physics;
    int chemistry;
    float total;
    printf("Enter your score in physics?\n");
    scanf( "%d", &physics);
    printf("Enter your score in chemistry\n");
    scanf( "%d", &chemistry);
    printf("Enter your score in maths\n");
    scanf( "%d", &maths);
    total = (maths + physics + chemistry)/3;
    if((total<40) || (physics<33) || (chemistry<33) || (maths<33)){
    printf("You got %f and you are fail",total);
    }
    else{ 
    printf("You got %f and you are passed",total);
    } 
    return 0;
}


