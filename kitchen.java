import java.util.*;
class kitchen
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t>0)
		{
		t-=1;
		int n = s.nextInt();
		int a[] = new int[n];
		int i,count=0;
		for(i=0;i<n;i++)
		{
			a[i]=s.nextInt();
		}
		int in = s.nextInt();
		if(in<=a[0])
			count++;
		for(i=0;i<n-1;i++)
		{
			int m= s.nextInt();
			if(m<=a[i+1]-a[i])
				count++;
		}
		System.out.println(count);
		}
	}
}
