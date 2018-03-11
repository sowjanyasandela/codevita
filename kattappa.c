#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,even=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			even++;
	}
	if(even>n/2)
		printf("READY FOR BATTLE\n");
	else
		printf("NOT READY\n");
}

	
