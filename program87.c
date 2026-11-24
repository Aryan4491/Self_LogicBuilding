#include<stdio.h>
#include<stdlib.h>

void CheckDivisible( int iNo)
{
    if ((iNo % 3) == 0 )                // If the number is divisible by 3 then the codition is go inside
    
    {
            if((iNo % 5)== 0) 
            {
                printf("It is Divisible \n");
            }
            else
            {
                printf("It  is not divisible");
            }               
    }
    else
    {
        printf("It is not divisible");
    }    

}
int main()
{
    int iValue = 0;
    
    printf("Enter number:\n ");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}