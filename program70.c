// Input 4
//1  2  3  4
#include<stdio.h>
#include<stdlib.h>

void displya(int iNo)
{
   int iCnt = 0 ;
   
    for(iCnt = 1 ; iCnt <= iNo; iCnt ++)
    {
        printf(" Jay Ganesh...\n");
    }
}
int main()
{
    int iValue =0 ;
    printf("Enter the ferquency: \n");
    scanf("%d",&iValue);

    displya(iValue);

    return EXIT_SUCCESS;

}