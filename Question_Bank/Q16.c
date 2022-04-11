#include<stdio.h>


long seq(int length)
{   
    long num = 0;
    int i;
    for(i=1;i<=length;i++){
        num = num*10 + i;
    }
    return num;

}


long ninenumbers(int length)
{
    int i;
    long num = 0;
    for(i=1;i<=length;i++)
    {
        num = num*10 + 9;

    }
    return num;
}


int main(){
    int number;
    int result;
    int resultseq;


    printf("Enter the value of number \n");
    scanf("%d",&number);

    resultseq = seq(number);

    result = ninenumbers(number);
    
    
   

    if(number<=9){
       printf("%d",resultseq);
    }
    else{

        printf("l%d",result);
        
    }
    
    


    return 0;
}


// Doubts regarding the Long input//




