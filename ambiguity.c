#include<stdio.h>
main()
{
	int t,count,i,n;
	do{
	scanf("%d",&n);
		count=0;
		if(n==0)
			return 0;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[a[i]-1]=i+1;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				printf("not ambiguous\n");
				break;
			}	
			else
				count++;
		}
		if(count==n)
			printf("ambiguous\n");
	}while(1);
}
