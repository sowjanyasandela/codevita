#include<stdio.h>
main()
{
	int t,sum,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&temp);
		sum=0;
		while(temp>0)
		{
			sum=(sum*10)+(temp%10);
			temp=temp/10;
		}
		printf("%d\n",sum);
	}
}
