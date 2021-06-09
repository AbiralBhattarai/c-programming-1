#include<stdio.h>
#include<conio.h>
int prod(int,int);
void main(){
	int a,b,result;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	result = prod(a,b);
	printf("Product = ",result);
}


int prod(int num1, int num2){
	int ans;
	ans = num1*num2;
	return ans;
}
