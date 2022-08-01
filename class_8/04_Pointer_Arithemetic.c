#include<stdio.h>

int main(){
    int i;
    int *ptr = &i;// ptr mein i ka address store hojayega

    printf("The value of ptr is %u\n ",ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr );
    // If you would see the difference between both the values You can clearly observe a differnece of 4 between the address of two,
    // This is because the size of an integer is 4 Bytes


    // But 1 char ek hi byte ka hota hai mtlb usme ek hi implement hoga
        

    
    return 0;
}


