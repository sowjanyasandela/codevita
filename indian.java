import java.util.*;
class indian
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0)
        {
        	int n = sc.nextInt();
    		int y=0,in=0,not=0;
        	char[] a=sc.next().toCharArray();
       	for (int i=0;i<n;i++)
       	{
       		if(a[i]=='Y')
       			y=y+1;
       		if(a[i]=='I')
       			in=in+1;
       		if(a[i]=='N')
       			not=not+1;
       	}
       	if(y>0)
       		System.out.println("NOT INDIAN");
       	else if(in>0)
       		System.out.println("INDIAN");
       	else
       		System.out.println("NOT SURE");
       	t=t-1;
       }
    }
}
