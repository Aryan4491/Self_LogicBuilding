/*
-------------------------------------------------
            OPRATION ||
--------------------------------------------------
    Result1     Result2         FINAL RESULT
--------------------------------------------------
    TRUE        TRUE                TRUE        // short Circuit
    TRUE        FALSE               TRUE        // short Circuit
    FALSE       TRUE                TRUE
    FALSE       FALSE               FALSE
--------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible( int iNo)
{
    if (((iNo % 5) == 0 ) || ((iNo % 3)== 0))       
    {    
        printf("It is divisible \n");               
    }
    else 
    {
        printf("It is not Divisible \n");
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