#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////////////
//
//  
//  Function name   :   Addtion
//  Input           :   Integer, Interger
//  Output          :   Integer
//  Description     :   perform addtion
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

int  Addition(
                int ino1,        //first input   
                int ino2         //second input 
             )
{
    int iAns = 0; 
   
    iAns  = ino1+ ino2;          // Business logic 
   
    return iAns;
}
//////////////////////////////////////////////////////////////////////
//
// Entry point of the Application 
//
//////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 =0  , iValue2=0  , iResult= 0 ;

    printf ("Enter first number : \n");
    if( scanf("%d",&iValue1) != 1)
        {
            fprintf(stderr," Unable to Proceed as Input is  Invalid ");

            return EXIT_FAILURE;
        }

    printf ("Enter second number : \n");
    if( scanf("%d",&iValue2) != 1)
        {
            fprintf(stderr," Unable to Proceed as Input is  Invalid ");

            return EXIT_FAILURE;
        }

    iResult = Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iResult);

    
    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////
//      Step5 : test the program
//
//
//          tested Test Case
//-----------------------------------------------------
//      Input1   Input2     Output
//-----------------------------------------------------
//      10         11       21
//      11          0       11
//      0          11       11
//      20         -9       11
//      -9         20       11
//      -20        -11     -31
//------------------------------------------------------
//
//////////////////////////////////////////////////////////////////////
///project==       .c    helper.c     header.c
