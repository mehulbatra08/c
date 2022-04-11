#include<stdio.h>

int isEven(int num)
{
    if (num%2 == 0){
        return 1;

    }
    else{
        return 0;
    }
}
int main(){
    int numb;
    printf("Enter the number \n");
    scanf("%d",&numb);

    printf("The number %d is %d",numb,isEven(numb));
    
    return 0;
}


