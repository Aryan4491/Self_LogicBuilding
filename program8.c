/*
    step1 : understand the problem statement 
    step2 : write the alogorithm 
    step3 : decide the programing language
    step4 : write the program
    step5 :  test the program
*/

//////////////////////////////////////////////////////
//
//step1 : understad the problem statement 
//        user is going to enter  any 2 imteger and we have to perform addtion
//
//////////////////////////////////////////////////////
//step2 : write the alogorithm 
/*
    START 
        accept first number as no1
        accept second number as no2
        create the variable as Ans  to store the result
        perform the addition and store into result 
        Display the result from Ans  
    END
*/
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
//step3 : decide the programing language
//
///////////////////////////////////////////////////////////////////////
//          we slect c programing 
//////////////////////////////////////////////////////////////////////
//
//step4 : write the program
//
//////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////
//
//  
//  Function name   :   Addtion
//  Input          :   Integer, Interger
//  Output          :   Integer
//  Description     :   perform addtion
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
int  Addition(int ino1,int ino2)
{
    int iAns = 0; 
    iAns  = ino1+ ino2;     // Business logic 
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
    scanf("%d",&iValue1);

    printf ("Enter second number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iResult);

    
    return 0 ;
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
//
//

//////////////////////////////////////////////////////////////////////