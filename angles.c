#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int t1,t2,t3;
		scanf("%d%d%d",&t1,&t2,&t3);
		if(t1>0 && t2>0 && t3>0)
		{
			if((t1+t2+t3)==180)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
}		
