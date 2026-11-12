import java.util.Scanner;

class program24
{
    public static void main(String a[])
    { 
        Scanner scanner = null;     
        String sName  = null;

        scanner = new Scanner(System.in);           // scanner
        
        System.out.println(" Enter your name : ");
        sName =  scanner.next();                    // nextLine = next(for single word )

        System.out.println("Welcome "+ sName );

       
    }
}