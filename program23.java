import java.util.Scanner;

class program23
{
    public static void main(String a[])
    { 
        Scanner scanner = null;
        String sName  = null;

        scanner = new Scanner(System.in);           // scanner
        
         System.out.println(" Enter your name : ");
         sName =  scanner.nextLine();

         System.out.println("Welcome "+ sName );

       
    }
}