#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,sum=0,num;
		scanf("%d",&n);
		num=n;
		while(n>0)
		{
			sum=sum*10+(n%10);
			n=n/10;
		}
		if(num==sum)
			printf("wins\n");
		else
			printf("losses\n");
	}
}
