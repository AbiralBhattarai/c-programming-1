#include<stdio.h>
#include<conio.h>
void main(){
	int n,c,i,j,k;
	double fact,sum;
	printf("input enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			c=0;
			for(j=1;j<=i;j++){
				if(i%j==0){
					c = c + 1;
				}
			}
			if(c == 2){
				fact = 1;
				for(k=1;k<=i;k++){
					fact = fact * (double)k;
				}
				sum = sum + fact;
			}
		}
	}printf("Sum of factorials of prime factors of %d is %.2lf",n,sum);
}
