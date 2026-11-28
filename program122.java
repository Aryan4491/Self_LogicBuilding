import java.util.Scanner;


class program122
{
    public static void main(String a[])
    {
        Digit digit = new Digit();

        digit.DiaplyaDigits();

    }
}
class Digit
{
    public void DiaplyaDigits()
    {
        int iNo = 9752;
        int iDigit = 0 ;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            iNo = iNo/10;                       
            System.out.println(iDigit);
        }




    }
}