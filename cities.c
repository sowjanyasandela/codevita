#include<stdio.h>
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	char ch;
        scanf("%c\n",&ch);
        if(ch=='b'||ch=='B')
        printf("BattleShip\n");
        if(ch=='c'||ch=='C')
        printf("Cruiser\n");
        if(ch=='D'||ch=='d')
        printf("Destroyer\n");
        if(ch=='F'||ch=='f')
        printf("Frigate\n");
	}
}
//Ippudu vastadi chudu
