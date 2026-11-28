import java.util.Scanner;

class program124
{
    public static void main(String a[])
    {
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter number :");
        int iValue = scanner.nextInt();

        digit.DiaplyaDigits(iValue);

    }
}
class Digit
{
    public void DiaplyaDigits(int iNo )
    {
        int iDigit = 0 ;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            iNo = iNo/10;                       
            System.out.println(iDigit);
        }

    }
}