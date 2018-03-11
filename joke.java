import java.util.Scanner;
class joke
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t>0)
		{
			t-=1;
			int n = s.nextInt();
			int min=0;
			for(int i=0;i<n;i++)
			{
				int x=s.nextInt();
				int y=s.nextInt();
			}
			for(int i=1;i<=n;i++)
			{
				min^=i;
			}
			System.out.println(min);
		}
	}
}
