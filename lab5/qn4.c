#include<stdio.h>
#include<conio.h>
int bin(int a);
void main(){
	int dec,binary;
	printf("Enter decimal number:");
	scanf("%d",&dec);
	binary = bin(dec);
	printf("Binary = %d",binary);
}


int bin(int a){
	int i,bin=0,rem=0;
	i = 1;
	while(a!=0){
		rem = a % 2;
		bin = bin + rem*i;
		i = i*10;
		a = a/2;
	}
	return bin;
}
