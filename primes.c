#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int num,i,count=0;
		scanf("%d",&num);
		for(i=2;i<num/2;i++)
		{	
			if(num%i==0)
			{
				printf("no\n");
				count++;
				break;
			}
		}
		if(count==0)
			printf("yes\n");
	}
}
		
			
