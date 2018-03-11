#include<stdio.h>
main()
{
	int t,i,n,max=1,count=0;
	scanf("%d",&t);
	while(t--)
	{
		 scanf("%d",&n);
		 int a[n];
		 for(i=0;i<n;i++)
			 scanf("%d",&a[i]);
		 for(i=0;i<n;i++)
		 {
		 	if(a[i]>max)
		 		max=a[i];
		 }
		 i=0,count=0;
		 while(max>1 && i<n)
		 {
		 	if((a[i]%max)!=0)
		 	{
		 		max--;
		 		i=0;
		 		count=0;
		 	}
		 	else
		 	{
		 		i++;
		 		count++;
		 	}
		 }
		 if(count==n || count==0)
		 {
		 	for(i=0;i<n;i++)
		 		printf("%d ",a[i]/max);
		 	printf("\n");
		 }
	}
}
		 
