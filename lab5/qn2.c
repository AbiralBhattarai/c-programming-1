#include<stdio.h>
#include<conio.h>
#include<ctype.h>
char isprime(int a);
void main(){
	int n;
	char c;
	printf("Enter number: ");
	scanf("%d",&n);
	c = isprime(n);
	if(c == 'Y'){
		printf("Prime!");
	}else{
		printf("Not prime!");
	}
}


char isprime(int a){
	int c,i;
	for(i=1;i<=a;i++){
		if(a%i == 0){
			c = c + 1;
		}
	}if(c == 2){
		return 'Y';
	}else {
		return 'N';
	}
}
