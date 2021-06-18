#include<stdio.h>
#include<conio.h>
int fibonacci(int n);
void main(){
	int n,term,i;
	printf("Enter which term of fibonacci you want: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		term = fibonacci(i);
		printf("%d\t",term);	
	}
	getch();
}
int fibonacci(int n){
	if(n == 1){
		return 0;
	}
	else if(n == 2){
		return 1;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}		
}
