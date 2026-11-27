#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheackPrime(int iNo)
{
    int iCnt = 0 ; 
    bool bFlage = false;
    
    for(iCnt = 2 , bFlage = true   ; iCnt <= iNo/2  ; iCnt++)     
    {   
        if((iNo % iCnt) == 0 )
        {
           bFlage = false;                           
        
        }
    }
    return bFlage;
}


int main(void)      // void indicate the function accept nothing  as  input
{

    int iValue = 0 ;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheackPrime(iValue);

    if(bRet)            // only write bRet means true
    {
        printf("IT is prime number");
    }
    else
    {
        printf("It is not a Prime number");
    }

    return EXIT_SUCCESS;
}

/*
Enter number : 13
IT is prime number
D:\LB>myexe
Enter number : 14
It is not a Prime number
*/