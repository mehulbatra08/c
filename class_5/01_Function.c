#include<stdio.h>
void display(); //funtion prototype

int main(){
    int a;
    printf("Initializing Display function\n");

    display(); //Funtion Call
    printf("Display funtion finished its work\n");

    return 0;

}
//Funtion Call
void display(){
    printf("This is display\n");

}


