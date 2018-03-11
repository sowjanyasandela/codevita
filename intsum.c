#include<stdio.h>
main()
{
	int t,temp,sum,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&temp);
		sum=0;
		while(temp>0)
		{
			c=temp%10;
			sum=sum+c;
			temp=temp/10;
		}
		printf("%d\n",sum);
	}
}
