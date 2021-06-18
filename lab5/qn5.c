#include<stdio.h>
#include<conio.h>
int fact(int a);
void main(){
	int a,ans=0;
	printf("Enter a number: ");
	scanf("%d",&a);
	ans = fact(a);
	printf("Factorial = %d",ans);
	getch();
}

int fact(int a){
	if(a > 1){
		return a*fact(a-1);
	}else{
		
		return 1;
	}
}
