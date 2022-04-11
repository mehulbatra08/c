#include<stdio.h>
int a , b;
void change();


int main(){
    b = 344;
    printf("The value of b before change is %d\n", b);
    change(b);

    printf("the value of b after change is %d\n", b);

    
    return 0;
}

void change(int )
