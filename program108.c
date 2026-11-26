#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheackPrime(int iNo)
{
    int iCnt = 0 ; 
    int iSum = 0 ;
    
    for(iCnt = 1 ; iCnt <= iNo/2  ; iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iSum = iSum + iCnt;
        
        }
    }

    if(iSum == 1)
    {
        return true;

    }
    else
    {
        return false;
    }

}
int main(void)      // void indicate the function accept nothing  as  input
{

    int iValue = 0 ;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheackPrime(iValue);

    if(bRet == true)
    {
        printf("IT is prime number");
    }
    else{
        printf("It is not a Prime number");
    }

    return EXIT_SUCCESS;
}