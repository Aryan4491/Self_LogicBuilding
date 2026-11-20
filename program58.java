import java.util.Scanner;

class program58
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

        if(iNo <= 0)
        {
            //Input filter
            System.out.println("Invalide input..");       
            return ;
        }

        for(iCnt = 1; iCnt <= iNo ; iCnt++)
        {
            System.out.println("Jay Ganesh........");
        }

    }
}