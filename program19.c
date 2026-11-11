#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int ino)
{
    if((ino % 2) == 0)
    {
       return true;

    }
    else
    {
        return false;

    }
}

int main()
{
    int iValue = 0 ;
    bool bret = false ;         // because = false (0)

    printf("Enter number: \n ");
    scanf("%d", &iValue);

    bret = CheckEven(iValue);

    if(bret == true)
    {
        printf("It is even \n");
    }
    else 
    {
        printf("It is false \n");
    }
    return EXIT_SUCCESS;

}