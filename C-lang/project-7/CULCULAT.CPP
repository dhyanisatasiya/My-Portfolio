#include<stdio.h>
#include<conio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

void main()
{
    int choice, a, b;

    clrscr();

    do
    {
        printf("\n\n------ CALCULATOR ------");

        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for the exit");

        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);

        if(choice >= 1 && choice <= 5)
        {
            printf("Enter the first number: ");
            scanf("%d",&a);

            printf("Enter the second number: ");
            scanf("%d",&b);
        }

        switch(choice)
        {
            case 1:
                printf("Addition of %d and %d is %d",a,b,add(a,b));
                break;

            case 2:
                printf("Subtraction of %d and %d is %d",a,b,sub(a,b));
                break;

            case 3:
                printf("Multiplication of %d and %d is %d",a,b,mul(a,b));
                break;

            case 4:
                if(b != 0)
                    printf("Division of %d and %d is %d",a,b,divi(a,b));
                else
                    printf("Cannot divide by zero");
                break;

            case 5:
                if(b != 0)
                    printf("Modulus of %d and %d is %d",a,b,mod(a,b));
                else
                    printf("Cannot divide by zero");
                break;

            case 0:
                printf("Exit...");
                break;

            default:
                printf("Invalid choice!");
        }

    }while(choice != 0);

    getch();
}