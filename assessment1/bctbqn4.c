/*WAP to find the if the product of digits of given integer number is even or odd. If the product is even,
then count the number of digits of entered numbers. If the product is odd find the sum of digits of given
number. [7*/
#include<stdio.h>
#include<conio.h>
void main(){
	int n,c=0,term,original,i,j,prod=1,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	original =n;
	while(n!=0){
		term = n%10;
		prod = prod * term;
		sum = sum + term ;
		n = n/10;
		c = c + 1;
	}
	if(prod%2 == 0){
		printf("number of digits = %d", c);
	}
	else{
		printf("sum of digits = %d",sum);
	}
}
