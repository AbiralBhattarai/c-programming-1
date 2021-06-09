#include <stdio.h>
#include <conio.h>
int prime(int);
void main()
{
	int a, b;
	printf("Enter any number: ");
	scanf("%d", &a);
	if(prime(a)==2)
	{
		printf("the number is prime");
	}
	else
	{
		printf("the number is not prime");
	}
	
	getch();
	
}
int prime(int x)
{
	int i, count=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	return(count);
}
