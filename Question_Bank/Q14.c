// // Functions receives some number i.e "length"
// // 999...9
// // Examples:
// //      - Length = 3 -->999
// //      - Length = 5 -->99999

// #include<stdio.h>

// int main(){
//     int i, n , a=9 ;

//     printf("The value of n is \n");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++){
//         printf("%d", a);
//     }
    
    
//     return 0;
// }

#include<stdio.h>

int ninenumbers(int length)
{
    int i;
    int num = 0;
    for(i=1;i<=length;i++)
    {
        num = num*10 + 9;

    }
    return num;
}
int main(){
    int lengthSeq;
    int result;
    printf("Enter the length of nth number \n");
    scanf("%d",&lengthSeq);

    result = ninenumbers(lengthSeq);
    printf("Result = %d\n", result);
    return 0;
}


// in this question if we give the value of length as lets suppose 30;
// There the ans will quite complicated 
// Why is That?
// Because we have use "int", Now integer values stores upto 4 Byte which is not enough to give the answers for upto 30 ,,, Therefore For that reason we are going to use  Strings...








