#include<stdio.h>

int main(){
    int a = 5;
    int *p;
    p = &a;

    printf("%p\n",&a);
    printf("%p\n",p);
    printf("%d\n",a);
    printf("%d\n",*p);// we are going to the address where p points to and then take the value from that address.
    return 0;
}


