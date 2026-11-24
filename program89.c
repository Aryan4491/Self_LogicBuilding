#include<stdio.h>
#include<stdlib.h>

void Displya(int iNo)
{ 
    int iCnt = 0 ;

    iCnt =1 ;
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue = 0;
    

    printf("Enter number:\n ");
    scanf("%d", &iValue);

    Displya(iValue);

    return EXIT_SUCCESS;
}
