#include<stdio.h>
int sum(int a , int b);
int main(){

    int  a = 4, b = 7;
    printf("The value of 4+7 is %d\n",sum(a,b));
    printf("The value of a and b after function call is %d and %d\n",a,b);
    return 0;
}
int sum(int a, int b){
    int c;
    c = a+b;
    b = 3432;
    a = 23543;
    
    
    return c;
}

// Here we can see that the value of a and b in sum() function is 3432 and 23543 but in the main ( ) funtion is 4 and 7 
// and our output is also 4 and 7 , so this proves the value of a and b in sum() funtion does not effect the the value present in main()


