//Write a recursive function to calculate the sum of first natural numbers.

#include<stdio.h>

int RecursiveSum(int n){
int sum;

if(n == 1){
    return 1;

}
else{
    sum = RecursiveSum(n-1) + n;
}

return sum;


}






int main(){
    int final;
    int number;
    printf("Enter the value of number\n");
    scanf("%d",&number);

    final = RecursiveSum(number);

    printf("%d",final);

    return 0;
}







    
    
    
    
    
    

