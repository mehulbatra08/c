// Write a program in C to read n number of values in an array and display it in reverse order.


#include<stdio.h>

int main(){
    int i;
    int a[5];
    printf("Enter array Elements\n ");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);

    }
    
    for(i=4;i>=0;i--){
        printf("%d",a[i]);
    }
    
    return 0;
}




