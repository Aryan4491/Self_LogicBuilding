#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
{ 
    int iCnt = 0 ;
    

    for(iCnt = 1 ;  iCnt <= iNo/2 ; iCnt++)        // TO REDUCE THE TIME COMPLEXITY YOU HAVE TO WRITE THIS CODE
    {
        if((iNo % iCnt) == 0 )
        {
                iSum = iSum + iCnt;
        }

    }
    if(iSum == iNo)
    {
        printf("It is the perfect number \n");
    }
    else 
    {
        printf("it is not perfect no \n");
    }
}
int main()
{
    int iValue = 0 ;

    
    printf("Enter number:\n ");
    scanf("%d", &iValue);

    CheckPerfect(iValue);
    printf("summetion of factior : %d\n", iRet);

    return EXIT_SUCCESS;
}

// time complexity : O(N)/2