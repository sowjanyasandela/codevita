#include<stdio.h>
main()
{
	int n,k=0,i;
	scanf("%d",&n);
	while(n--)
	{
		int input;
		unsigned long long int fact=1;
		scanf("%d",&input);
		if(input>1)
		{
			for(i=2;i<=input;i++)
			{
				fact=fact*i;
			}
		}
		printf("%llu\n",fact);
	}
}
