#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int price, qua;
		float dis,total;
		scanf("%d%d",&qua,&price);
		total=(float)qua*price;
		if(qua>1000)
		{
			printf("%f\n",total*0.9);
		}
		else
		{
			printf("%f\n",total);
		}
	}
}
