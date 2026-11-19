#include<stdio.h>
#include<stdlib.h>

float Average(int  iNo1,int iNo2)
{
    float fAns = 0.0f;

    //typecasting
    fAns = ((float)iNo1 + (float)iNo2)/ 2;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter first number :");
    scanf("%d",&iValue1);

    printf("Enter second number :");
    scanf("%d",&iValue2);

    fResult  = Average(iValue1,iValue2);

    printf("Average is : %f", fResult);

     

    return EXIT_SUCCESS;
}