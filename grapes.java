import java.util.*;
class grapes
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t>0)
		{
			t-=1;
			int n = s.nextInt();
			int k = s.nextInt();
			long count=0;
			for(int i=0;i<n;i++)
			{
				int m= s.nextInt();
				if(k==1)
					continue;
				if(m<k)
				{
					count=count+k-m;
					continue;
				}
				int l = m%k;
				if(l>k/2)
					count=count+k-l;
				else
					count=count+l;
			}
			System.out.println(count);
		}
	}
}
		
