#include<stdio.h>
void swap(int *a, int*b);
void wrong_swap( a ,b);

int main(){
    int x = 3 , y = 4;
    printf("The value of x and y before swap %d and %d\n",x,y);
    wrong_swap(x,y); //will not work due to call by value
    // agar mein kisi apne notes ki xerox copy du and woh unke saath khuch bhi krega it won't affect my original notes 
    // BUT what if I give you my address of original notes which is present in the locker of my college then you will be able to change the things in the notes. Right?
    swap(&x,&y); //will work due to call by Reference
    printf("The value of x and y is %d and %d\n",x,y);
    return 0;

}

void wrong_swap(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    // Now we do not want any return value here so we use void instead of int 
    // 
} 
 void swap(int *a , int *b){
     int temp;
     temp = *a;
     *a = *b;
     *b = temp;


 }


