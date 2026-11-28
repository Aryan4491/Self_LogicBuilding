import java.util.Scanner;

class program127
{
    public static void main(String a[])
    {
        Scanner scanner = new Scanner(System.in);
        int iRet = 0 ;                          //
        Digit digit = new Digit();

        System.out.println("Enter number :");
        int iValue = scanner.nextInt();
        iRet = digit.CountDigit(iValue);         //
       
        System.out.println("Number of Digits is : "+iRet);      //
    }
}
class Digit
{
    public int CountDigit(int iNo )
    {
        
        int iCount = 0 ;
        
        if(iNo < 0 )
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iNo = iNo/10;                      
            iCount++;           //
        }
        return iCount;          //

    }
}