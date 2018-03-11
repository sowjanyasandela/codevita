#include<stdio.h>
#include<string.h>
char* substring(char*, int, int);
int main()
{
	int dd,mm,yyyy,n=0,i=0;
	char str[10],a[2],b[2],c[4];
	scanf("%s",str);
	while(n<2) 
	{
      a[n]=str[n];
      n++;
   	}
  	 a[n]='\0';
	dd=atoi(a);
	n=3;
	while(n<5) 
	{
      b[i]=str[n];
      n++;
      i++;
   	}
  	 b[i]='\0';
	mm=atoi(b);
	i=0;
	n=6;
	while(n<10) 
	{
      c[i] = str[n];
      n++;
      i++;
   	}
  	 c[i]='\0';
	yyyy=atoi(c);
	printf("%d %d %d",dd,mm,yyyy);
	
	return 0;
	if(mm==4||mm==6||mm==9||mm==11)
	{
		if(dd>=31)
		{	
			printf("invalid date");
		}
			else
			{	
				
			
		

