#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",sName);                    //  [^'\n']= accept input until  enter 

    printf("welcome  %s\n", sName);


    return EXIT_SUCCESS;

}