#include<stdio.h>
#include<conio.h>

void main()
{
    	clrscr();
    	char str[50];
    	int i, j, count;

	printf("Enter any string: ");
    	scanf("%s", str);

    	printf("\nFrequency of each character:\n");

    	for(i = 0; str[i] != '\0'; i++)
    	{
        	count = 1;

        	if(str[i] != ' ')
        	{
            		for(j = i + 1; str[j] != '\0'; j++)
            		{
                		if(str[i] == str[j])
               		{
                    		count++;
                    		str[j] = ' ';
                	}
            	}

            	printf("%c => %d\n", str[i], count);
        }
    }

    getch();
}