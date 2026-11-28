import java.util.Scanner;


class program123
{
    public static void main(String a[])
    {
        Digit digit = new Digit();

        digit.DiaplyaDigits(9752);

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