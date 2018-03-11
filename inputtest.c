#include<stdio.h>
int main()
{
	int n,x,i,count,count1=0;
	scanf("%d%d",&n,&x);
	if(n>0 && x>0)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&count);
			if((count%x)==0)
			{
				count1++;
			}
		}
		printf("%d",count1);
	}
return 0;
}
