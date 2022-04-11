// 1.)Enter a funtion that will recieve an integer value num
// 2.)Take a sequence of number from the user until it recieves "-1"
// 3.) Return How many numbers has smaller value than "num"

// For Example num = 5
// 6,8,10,3,1,7,-1

#include <stdio.h>

int SmallerValue(){
    
    int num = 5,a;
    printf("Enter the number\n");
    scanf("%d",&a);
    
    if(a == -1){
        return 0;
    
    }
    if(a<5){
        return 1 + SmallerValue(a);
        
    }
    return SmallerValue(num);
    
}


int main(){
    
    int num = 5;
    int totalSmallervalue;
    
    totalSmallervalue = SmallerValue(num);
    printf("%d",totalSmallervalue);
    
    
    return 0;
}







