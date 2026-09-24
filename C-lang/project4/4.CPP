#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();

    int i, j, k;

    for(i=1; i<=5; i++)
    {


	for(j=1; j<i; j++)
	{
	    printf("  ");
	}


	for(k=1; k<=6-i; k++)
	{
	    if(k % 2 == 1)
	    {
		printf("1 ");
	    }
	    else
	    {
		printf("0 ");
            }
        }

        printf("\n");
    }

    getch();
}