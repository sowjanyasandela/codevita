#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,c,second;
		scanf("%d%d%d",&a,&b,&c);
		second = (a>b)?(a<c?a:(b>c?b:c)):(b<c?b:(a>c?a:c));
		printf("%d\n",second);
	}
}
