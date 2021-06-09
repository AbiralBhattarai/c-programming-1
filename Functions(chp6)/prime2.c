#include <stdio.h>
#include <conio.h>
char prime(int);
void main()
{
	int a, b;
	char res;
	printf("Enter any number: ");
	scanf("%d", &a);
	res = prime(a);
	if(res == 'y'){
		printf("Number is prime");
	}else{
		printf("Number is not prime");
	}
	
}
char prime(int x)
{
	int i, count=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	if(count == 2){
		return('y');
	}else{
		return('n');
	}
}
