#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,coins=0,i,left;
		scanf("%d%d",&n,&k);
		for(i=2;i<=k;i++)
		{
			left=n%i;
			if(left>coins)
				coins=left;
		}
		printf("%d\n",coins);
	}
}
		
