#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();

    int num = 11;

    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    getch();
}