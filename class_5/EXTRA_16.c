// Recursive funtion that will get some natural number "num"
// Read a sequence of "num " from the user.
//Return the maximum value of the sequence.


int findMaX(int num)
{
    int MaxSoFar;
    int UserInput;

    printf("Enter an Input\n");
    scanf("%d",&UserInput);
    if(num> 1){
        MaxSoFar = findMaX(num -1);
        
    }
}


