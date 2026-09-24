/*     Write a program to find the third angle of a right triangle when two other angles are given. */

#include<stdio.h>
#include<conio.h>

void main()
{
    	clrscr();
	int angle1, angle2, angle3;

    	printf("Enter First angle: ");
    	scanf("%d", &angle1);

    	printf("Enter Second angle: ");
    	scanf("%d", &angle2);

    	angle3 = 180 - angle1 - angle2;

    	printf("Third angle: %d", angle3);
	
  	  getch();
}
