#include<stdio.h>
main()
{
	int F,B,T,FD,BD,n,i,a=0,pos=100,f,count=0;
	printf("enter the number of testcases:");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("enter the values of F,B,T,FD,BD:");
		scanf("%d%d%d%d%d",&F,&B,&T,&FD,&BD);
		FD=FD+100;
		BD=100-BD;
		while(pos!=FD && pos!=BD)
		{
		f=0;
		while(pos!=FD && pos!=BD && f!=F)
		{
			pos=pos+1;
			f++;
			count++;
		}
		//printf("%d %d\n",count,pos);
		f=0;
		if(pos!=FD && pos!=BD)
		{
		while(pos!=FD && pos!=BD && f!=B)
		{
			pos=pos-1;
			f++;
			count++;
		}
		}
		//printf("%d %d\n",count,pos);
		}
		if(pos==FD)
		{
			count=count*T;
			printf("%d F\n",count);
		}
		else if(pos==BD)
		{
			count=count*T;
			printf("%d B\n",count);
		}
		else
			printf("no ditch");
		a++;
	}
}
			
