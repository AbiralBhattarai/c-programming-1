#include<stdio.h> //binary to demcimal
#include<conio.h>
#include<math.h>
void main(){
	int bin,dec,rem,c=0;
	printf("enter binary number:");
	scanf("%d",&bin);
	while(bin!=0){
		rem = bin % 10;
		dec = dec + rem*pow(2,c);
		c = c + 1;
		bin = bin/10;
	}
	printf("Decimal= %d",dec);
	getch();
	
}



//11101 = 1*2^4+1*2^3+1*2^2+0*2^1+1*2^0
