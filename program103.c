#include<stdio.h>
#include<stdlib.h>

int SumFactor(int iNo)          // sum of the factorials
{ 
    int iCnt = 0 , iSum = 0;
    

    for(iCnt = 1 ;  iCnt <= iNo/2 ; iCnt++)        // TO REDUCE THE TIME COMPLEXITY YOU HAVE TO WRITE THIS CODE
    {
        if((iNo % iCnt) == 0 )
        {
                iSum = iSum + iCnt;
        }

    }
    return iSum;
}
int main()
{
    int iValue = 0 , iRet = 0 ;

    
    printf("Enter number:\n ");
    scanf("%d", &iValue);

    iRet = SumFactor(iValue);

    printf("summetion of factior : %d\n", iRet);

    return EXIT_SUCCESS;
}

// time complexity : O(N)/2