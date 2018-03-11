#include<stdio.h>
int main()
{
	int i,j,n,count=0,k=0,sum=0,m,con=0;
	scanf("%d",&n);
	int a[n];
	for(i=2;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			a[k]=i;
			k++;
		}
		m=k;
		count=0;
	}
	for(i=1;i<m;i++)
	{
		for(j=0;j<i;j++)
		{
			sum=sum+a[j];
			if(sum==a[i])
				con++;
		}
		sum=0;
	}
	printf("%d\n",con);
return 0;
}
