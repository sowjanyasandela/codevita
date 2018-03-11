#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,num,num1,num2,i,cake=0,hard=0;
		scanf("%d%d",&n,&num);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		num1=num/2;
		num2=num/10;
		for(i=0;i<n;i++)
		{
			if(a[i]>=num1 && a[i]<=num)
				cake++;
			if(a[i]<=num2 && a[i]>=0)
				hard++;
		}
		if(cake==1 && hard==2)
			printf("yes\n");
		else
			printf("no\n");
	}
}
