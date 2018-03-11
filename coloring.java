import java.util.*;
class coloring
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		int t =s.nextInt();
		while(t>0)
		{	
			t-=1;
			int n = s.nextInt();
			String str = s.next();
			int r=0, g=0, b=0,i;
			for(i=0;i<n;i++)
			{
				if(str.charAt(i)=='R')
				{
					r++;
				}
				else if (str.charAt(i)=='G')
				{
					g++;
				}
				else
					b++;
			}
			int max=(r>g)?((r>b)?r:b):((g>b)?g:b);
			System.out.println(n-max);
		}
	}
}
