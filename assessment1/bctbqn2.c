#include<stdio.h>
#include<conio.h>
void main(){
	int n,a,b,c,i,j,k,term,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	a = 0;
	b = 1;
	for(i=1;i<=n;i++){
		term = a;
		c = a + b;
		a = b;
		b = c;
	}
	printf("The %d th term of fibonacci series is %d",n,term);
	for(j=1;j<term;j++){
		if(term%j==0){
			sum = sum + j;
		}
	}
	if(sum == term){
		printf("The ans is also a perfect number! and its factors are :- \n");
		for(k = 1;k<=term;k++){
			if(term%k == 0){
				printf("%d",k);
			}
		}
	}
}
