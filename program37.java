//Approch 3


import java.util.Scanner;

class Arithematic               ///Errorrrrrrr write at the bottom next program
{
    public static int Addition(int iNo1,int iNo2)
    {   
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

}
class program37
{   
    public static void main(String a[])
    { 
        Scanner scanner = null; 
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        
        scanner = new Scanner(System.in);           // scanner
        

       System.out.println("Enete first no:");
       iValue1 = scanner.nextInt();

       System.out.println("Enete Second  no:");
       iValue2 = scanner.nextInt();

       iResult = Arithematic.Addition(iValue1, iValue2);     

       System.out.println("Addition is : " +iResult);


       
    }
    
}


