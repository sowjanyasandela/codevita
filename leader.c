#include<stdio.h>
int main()
{
	int n,p1,p2,largest=0,leader,lead , q1 = 0 , q2 = 0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&p1,&p2);
		p1 += q1 , p2 += q2;
		if(p1>p2)
		{
			lead=p1-p2;
			if(lead>largest)
			{
				largest=lead;
				leader=1;
			}
		}
		else
		{
			lead=p2-p1;
			if(lead>largest)
			{
				largest=lead;
				leader=2;
			}
		}
		q1 = p1 , q2 = p2;
	}
	printf("%d %d\n",leader,largest);

return 0; 
}
