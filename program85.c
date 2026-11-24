/*
-------------------------------------------------
            OPRATION &&
--------------------------------------------------
    Result1     Result2         FINAL RESULT
--------------------------------------------------
    TRUE        TRUE                TRUE
    TRUE        FALSE               FALSE
    FALSE       TRUE                FALSE       // short circuit
    FALSE       FALSE               FALSE       // short circuit
--------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible( int iNo)
{
    if (((iNo % 5) == 0 ) && ((iNo % 3)== 0))       // If the number is divisible by 5 and 3 then the codition is true
    {
        printf("It is divisible \n");               // 15 input 
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