// Write a recursive function that will receive some number "n".
// This funtion will print all the number from 1 to "n".
// Example:
// INPUT: 4
// 1 2 3 4 
#include <stdio.h>
void Rec(int n){
   
    if(n<=4){
        printf("%d\n",n);
        Rec(n+1);
    }

}

int main(){
    int n = 1;
    Rec(n);
    return 0;
}




