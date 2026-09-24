#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();

    int a[3][3];
    int i, j, row, col;
    int sum = 0;

    printf("Enter array's elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);

    sum = 0;

    for(j = 0; j < 3; j++)
    {
        printf("%d ", a[row][j]);
        sum = sum + a[row][j];
    }

    printf("\nSum of row = %d\n", sum);

    printf("Enter column number: ");
    scanf("%d", &col);

    printf("Elements of column %d: ", col);

    sum = 0;

    for(i = 0; i < 3; i++)
    {
        printf("%d ", a[i][col]);
        sum = sum + a[i][col];
    }

    printf("\nSum of column = %d", sum);

    getch();
}