#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int amount;
		scanf("%d",&amount);
		if(amount<1500)
		{
			printf("%g\n",amount+amount*0.1+amount*0.9);
		}
		else
		{
			printf("%g\n",amount+500.0+amount*0.98);
		}
	}
}
