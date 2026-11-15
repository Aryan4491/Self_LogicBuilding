//Approch 1

import java.util.Scanner;

class program33
{
    public static void main(String a[])
    { 
        Scanner scanner = null; 
        int iValue1 = 0, iValue2 =0, iResult = 0;

        
        scanner = new Scanner(System.in);           // scanner
        

       System.out.println("Enete first no:");
       iValue1 = scanner.nextInt();

       System.out.println("Enete Second  no:");
       iValue2 = scanner.nextInt();

       iResult = iValue1 + iValue2 ;                // bussiness logic 

       System.out.println("Addition is : " +iResult);


       
    }
}