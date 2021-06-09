#include<stdio.h> //decimal to binary
#include<conio.h>
#include<math.h>
void main(){
	int bin,dec,rem,i=1;
	printf("enter binary number:");
	scanf("%d",&dec);
	while(dec!=0){
		rem = dec % 2;
		bin = bin + rem*i;
		dec = dec / 2;
		i = i *10;
		printf("%d\t",bin);
	}
	printf("\nDecimal= %d",bin);
	getch();
	
}

