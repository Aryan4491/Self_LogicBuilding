import java.util.Scanner;

class program27
{
    public static void main(String a[])
    { 
        Scanner scanner = null;     
        String sName  = null;
        int iAge = 0 ;
        float fMarks = 0.0 ;                    // error 

        scanner = new Scanner(System.in);           // scanner
        
        System.out.println(" Enter your name : ");
        sName =  scanner.next();                    // nextLine = next(for single word )

        System.out.println("Eneter your age :");
        iAge = scanner.nextInt();

        System.out.println("Eneter your marks :");
        fMarks = scanner.nextFloat();


        System.out.println("Welcome "+ sName );

        System.out.println("your Age is :" +iAge);
        System.out.println("your marks :" +fMarks);

       
    }
}