#include<stdio.h>
#include<conio.h>
int sum(int n);
void main(){
	int n,add;
	printf("Enter Value of N: ");
	scanf("%d",&n);
	add = sum(n);
	printf("Sum = %d",add);
	getch();
}

int sum(int n){
	if(n==1){
		return 1;
	}else{
		return n+sum(n-1);
	}
}
