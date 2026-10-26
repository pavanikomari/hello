#include<stdio.h>
int main()
{
	float per;
	printf("\n enter percentage");
	scanf("%f",&per);
	if(per>=75)
	{
		printf("\nDISTINCTION");
	}
	else if(per>=65&&per<=74)
	{
printf("\n first class");
	}
	else if(per>=55 && per<=59)
	{
	printf("\n second class");
	}
	else
	{
		printf("\n fail");
		
	}
}
