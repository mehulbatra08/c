#include<stdio.h>

int main(){
    int x = 2;
    int y = 3;
    printf("the value of 3x-8y is %d \n",3*x - 8*y);        // * % / are given first priority
    //                                                             + - are  given second priority
    //                                                             = is given last priority
    printf("the value of 8*y/3*x is %d \n",8 * y/ 3 * x);
    // 8*3 / 3*x = 24/6 give wrong answer
    // 24/3*2
    // 8*2
    // 16

    return 0;
}


