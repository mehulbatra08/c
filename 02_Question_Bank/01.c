#include<stdio.h>

int main(){
    char f_name[20];
    char s_name[20];
    long number;  //Jab number bohot bada hota hai tab int nahi lgta long lgta hai
    int date,year;
    char month[20]; 
    printf("What is Your f_name\n");
    
    scanf("%s",&f_name);

    printf("What is your s_name\n");

    scanf("%s",&s_name);

    printf("Enter your ph no\n");
    scanf("%ld",&number);

    printf("Enter your dob\n");
    scanf("%d%s%d",&date,&month,&year);

    printf("Your Full name is: %s %s\n",f_name,s_name);
    printf("Your Full number is: %ld\n",number);
    printf("Your Full DOB is: %d-%s-%d\n",date,month,year);

    

    return 0;
}




