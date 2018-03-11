import java.util.Scanner;
class balloons
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		int t=s.nextInt();
		while(t>0)
		{
			String str = s.next();
			int a=0,b=0;
			for(int i=0;i<str.length();i++)
			{
				if(str.charAt(i)=='a')
					a+=1;
				else if(str.charAt(i)=='b')
					b+=1;
			}
			int min=a<b?a:b;
			System.out.println(min);
			t=t-1;
		}
	}
}
			
		
