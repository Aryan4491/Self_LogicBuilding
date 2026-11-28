import java.util.Scanner;


class program121
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
        int iNo = 175902;

        while(iNo != 0)
        {
            System.out.println("Digit is  :" +(iNo % 10));       
            iNo = iNo/10;                       
            System.out.println("Number is :" +iNo);
        }




    }
}