import java.util.Scanner;

class program66
{
    public static void main(String a[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0; 


        Iteration iteration = new Iteration();

        System.out.println("Enter the ferquency:");
        iValue = scanner.nextInt();

        iteration.displya(iValue);
    }
}
class Iteration
{
    public void displya(int iNo)
    {
       int iCnt = 0 ;

       iCnt = 1;                    // starting point 
       while( iCnt <= iNo )
        {
            System.out.println("-------------");
            System.out.println(iCnt + " Jay Ganesh...");   
            System.out.println("-------------");
            iCnt++;
        }

    }
}