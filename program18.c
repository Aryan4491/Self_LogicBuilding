#include<stdio.h>
#include<stdlib.h>

void CheckEven(int ino)
{
    if((ino % 2) == 0)
    {
        printf("The number is Even \n ");
    }
    else
    {
        printf("The number is odd \n ");
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number: \n ");
    scanf("%d", &iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;

}