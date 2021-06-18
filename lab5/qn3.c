#include<stdio.h>
#include<conio.h>
int ispalindrome(int a);
void main(){
	int a,b,i,ans;
	printf("Enter start of range:");
	scanf("%d",&a);
	printf("Enter start of range:");
	scanf("%d",&b);
	for(i=a;i<=b;i++){
		ans = ispalindrome(i);
	}
}

int ispalindrome(int a){
	int original,rem=0,rev=0;
	original = a;
	while(a!=0){
		rem = a%10;
		rev = rev*10 + rem;
		a = a/10;
	}
	if(rev == original){
		printf("%d\t",rev);
	}
}
