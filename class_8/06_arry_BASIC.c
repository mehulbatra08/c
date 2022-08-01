#include<stdio.h>

int main(){
    int marks[4];

    for(int i = 0;i<4;i++){
        printf("Enter the value of %d element of the array\n",i);
        scanf("%d",&marks[i]);
    }
    for(int i = 0;i<4;i++){
        printf("The value of %d element of the array is %d \n ", i,marks[i]);
        
    }
    // marks[0] = 34;
    // printf("Marks of student 4 is %d\n",marks[0]);
    // marks[0] = 854;
    // marks[1] = 654;
    // marks[2] = 554;
    // marks[3] = 154;
    // marks[4] = 254;
    // printf("Marks of student 1 is %d\n",marks[0]);
    return 0;

}


