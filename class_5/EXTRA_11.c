// We have to write a recursive funtion that will calculate and return the total number of EVEN numbers in a sequence
// Return a sequence of integers from the user... up until -1


// EXAMPLE :
// 1,3,4,6,-1; --> 2
#include <stdio.h>

// CalculateEven(){
//     int num;

//     printf("Enter the Sequence of the number\n");
//     scanf("%d",&num);

//     if(num%2 != 0){
//         return 0;

//     }
//     if(num % 2  == 0){
//         return 1 + CalculateEven(num);

//     }
//     CalculateEven(num);

// }

CalculateEven(){
    int num;

    printf("Enter the Sequence of the number\n");
    scanf("%d",&num);

    if(num == -1){
        return 0;

    }
    if(num % 2  == 0 ){
        return 1 + CalculateEven(num);

    }
    CalculateEven(num);

}

int main(){
    int number;
    int TotalEvenNumber;
    TotalEvenNumber = CalculateEven(number);
    printf("%d",TotalEvenNumber);

    return 0;
}