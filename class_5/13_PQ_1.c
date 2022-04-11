// Find the average of Three numbers using functions

findAverage(int a , int b , int c){
    int avg;
    avg = (a + b + c)/3;

    return avg;

}



#include<stdio.h>

int main(){
    int x , y , z;
    int FinalAverage;

    printf("Enter the value of three numbers\n");
    scanf("%d%d%d",&x,&y,&z);
    FinalAverage = findAverage(x,y,z);
    printf("The average of three numbers is %d",FinalAverage);
    return 0;
}




