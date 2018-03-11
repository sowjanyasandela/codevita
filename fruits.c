#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,k;
		scanf("%d%d%d",&n,&m,&k);
		int diff = (n>m)?n-m:m-n;
		int left=0,actual;
		if(k<diff)
		{
			printf("%d\n",diff-k);
		}
		else
		{
			printf("%d\n",left);
		}
	}
}
		
		
