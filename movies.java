import java.util.Scanner;
class movies
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t>0)
		{
			t-=1;
			int n = s.nextInt();
			int a[] =new int[n];
			int i,max=0,index=0,rating=0;
			for(i=0;i<n;i++)
				a[i]=s.nextInt();
			for(i=0;i<n;i++)
			{
				int r1 = s.nextInt();
				if(r1*a[i]>max)
				{
					max=r1*a[i];
					index=i+1;
					rating=r1;
				}
				else if(r1*a[i]==max)
				{
					if(r1>rating)
					{
						index=i+1;
						rating = r1;
					}
				}
			}
			System.out.println(index);
		}
	}
}
					
			
