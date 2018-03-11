import java.math.BigInteger;
import java.util.Scanner;
 
class fact
{
    static BigInteger factorial(int n)
    {
        BigInteger f = new BigInteger("1"); 
        for (int i = 2; i <= n; i++)
            f = f.multiply(BigInteger.valueOf(i));
 
        return f;
    }
    public static void main(String args[]) throws Exception
    {
    	  Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        while(n>0)
        {
        	int k = s.nextInt();
        	System.out.println(factorial(k));
        	n--;
        }
    }
}
