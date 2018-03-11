#include<stdio.h>
main()
{
	int n,k=0,i;
	scanf("%d",&n);
	int a[n];
	while(n--)
	{
		int input,fact=1;
		scanf("%d",&input);
		if(input>1)
		{
			for(i=2;i<=input;i++)
			{
				fact=fact*i;
			}
		}
		a[k]=fact;
		k++;
	}
for(i=0;i<k;i++)
	printf("%d\n",a[i]);
}
