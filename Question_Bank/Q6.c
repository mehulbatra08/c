// Find the percentage of 5 subjects


#include<stdio.h>

int main(){
    int maths,science,physics,chemistry,ED,average;
    printf("Enter the score of 5 subjets \n");
    scanf("%d%d%d%d%d", &maths,&physics,&science,&chemistry,&ED);
    average = (maths + science + physics + chemistry + ED)/500*100;
    printf("The percentage of 5 subject is %d\n",average);



    return 0;
}




