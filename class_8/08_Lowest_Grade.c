#include<stdio.h>

int main(){
    int i;
    int grade[5];
    int lowest_grade;
    for(i=0;i<4;i++){
        printf("Enter the grades of students \n");
        scanf("%d",&grade[i]);

    }

    lowest_grade = grade[0];
    for(i=0;i<5;i++){
        if(grade[i]<lowest_grade)

            lowest_grade = grade[i];
        
    }
    printf("Your lowest grade is: %d\n",lowest_grade);
    return 0;
}


