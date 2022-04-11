// Calculate income tax paid by an employee tt o the government as per the slabs mention below:

//     income slab                 TAX
//         2.5L - 5L               5%
//         5L - 10L                10%
//         above 10L               30%


#include<stdio.h>

int main(){
    float tax = 0;
    float income;
    printf("Enter your salary\n ");
    scanf("%f",&income);
    if (income>=250000 && income<=500000){
    tax = tax + 0.05*(income- 250000);
    }
    if(income>500000 && income<=1000000){
    tax = tax + 0.1*(income - 500000);
    }
    if(income>100000){
        tax = tax + 0.2*(income - 100000); 
    }

    printf("Your net income tax to be paid by 8th june is  %f\n",tax);


    return 0;
}















