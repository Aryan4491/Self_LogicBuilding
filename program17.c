#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iValue = 0 ;

    printf("Enter number: \n ");
    scanf("%d", &iValue);

    if((iValue % 2) == 0)
    {
        printf("The number is Even \n ");
    }
    else
    {
        printf("The number is odd \n ");
    }


    return EXIT_SUCCESS;

}