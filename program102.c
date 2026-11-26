#include<stdio.h>
#include<stdlib.h>

void DisplyaFactor(int iNo)
{ 
    int iCnt = 0 ;

    printf("Factors of %d is : \n ", iNo);

    for(iCnt = 1 ;  iCnt <= iNo/2 ; iCnt++)        // TO REDUCE THE TIME COMPLEXITY YOU HAVE TO WRITE THIS CODE
    {
        if((iNo % iCnt) == 0 )
        {
                printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter number:\n ");
    scanf("%d", &iValue);

    DisplyaFactor(iValue);

    return EXIT_SUCCESS;
}

// time complexity : O(N)/2