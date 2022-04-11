// Calculate the sum of numbers from 1 to n using recursion


#include<stdio.h>
int sum(int num){
    int addition;
    if(num == 1){
        return 1;
    
    }
    else{
    addition = num + sum(num-1);
    }
    return addition;
}





int main(){
    int number;
    int cool;
    printf("Enter the number \n");
    scanf("%d",&number); 

    cool = sum(number);
    
    printf("%d",cool);
    return 0;
}


