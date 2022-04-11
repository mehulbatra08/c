#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 + 1 ; //Generates a random number between 1 and 100
    // printf("The number is %d\n", number);

    // Keep running rhe loop until the number is guessed
    do{
        printf("Guess a number b/w 1 and 100\n");
        scanf("%d" , &guess);

        if(guess>number){
            printf("Lower number please\n");
        }
        else if(guess<number){
            printf("higher number please\n");

        }
        else{
            printf("you Guess it in %d attempts\n", nguesses);

        }
        nguesses++;
    }while(guess!=number);
    return 0;
}


