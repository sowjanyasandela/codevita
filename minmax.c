#include<stdio.h>
main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,min=0;
		scanf("%lld",&n);
		long long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		min=a[0];
		for(i=0;i<n;i++)
		{
			if(min>a[i])
				min=a[i];
		}
		printf("%lld\n",min*(n-1));
	}
}
		
