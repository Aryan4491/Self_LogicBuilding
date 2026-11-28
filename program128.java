import java.util.Scanner;

class program126
{
    public static void main(String a[])
    {
        Scanner scanner = new Scanner(System.in);
        int iRet = 0 ;                          //
        Digit digit = new Digit();

        System.out.println("Enter number :");
        int iValue = scanner.nextInt();
        iRet = digit.SumDigit(iValue);         //
       
        System.out.println("Addition  of addd is : "+iRet);      

        scanner.close();
    }
    
}
class Digit
{
    public int SumDigit(int iNo )
    {
        int iDigit = 0 ;
        int iSum = 0 ;
        
        if(iNo < 0 )
        {
            iNo = -iNo;
        }
        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            iSum = iSum +iDigit;
            iNo = iNo / 10   ;                         
        }
        return iSum;          //

    }
}