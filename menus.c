#include<stdio.h>
main()
{
	int t,temp,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&temp);
		if(temp>=2048)
		{
			sum=temp/2048;
			temp=temp%2048;
		}
		while(temp>0)
		{
			if(temp%2!=0)
				sum++;
			temp=temp/2;
		}
		printf("%d\n",sum);
	}
}
