#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();

	for(int i=41; i<=46; i++)
	{
		for(int j=41; j<=i-1; j++)
		{
		printf("%d ",j);
		}

			printf("\n");
	}

	getch();
}