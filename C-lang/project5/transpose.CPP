#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();

    int arr[10][10];
    int i, j, r;

    printf("Enter the array's row & column size: ");
    scanf("%d", &r);

    printf("\nEnter the array's elements:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe original matrix is:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    printf("\nThe transpose matrix of an array is:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d ", arr[j][i]);
        }

        printf("\n");
    }

    getch();
}