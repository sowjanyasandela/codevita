#include<stdio.h>
main()
{
	int t,temp,c,count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&temp);
		while(temp>0)
		{
			c=temp%10;
			if(c==4)
				count++;
			temp=temp/10;
		}
		printf("%d\n",count);
	}
}
		
