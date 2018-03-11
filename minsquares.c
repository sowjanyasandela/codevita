#include<stdio.h>
int gcd(int a,int b)
{
if(a==0)
return b;
else
return gcd(b%a, a);
}
main()
{
	int t,max,h,d;
	scanf("%d",&t);
	while(t--)
	{
		int l,b;
		scanf("%d%d",&l,&b);
		h=l*b;
		max=gcd(l,b);
		d=h/(max*max);
		printf("%d\n",d);
	}
}	
