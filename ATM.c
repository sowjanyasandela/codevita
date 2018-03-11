#include<stdio.h>
#include<math.h>
int main()
{
	float n;
	int x;
	scanf("%d%f",&x,&n);
	if((x>(n-0.50)) || ((x%5)!=0))
	{
		printf("%f",n);
	}
	else
	{
		n=n-x;
		n=n-0.50;
		printf("%.2f",n);
	}
return 0;
}
