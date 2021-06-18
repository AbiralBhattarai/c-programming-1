#include<stdio.h>
#include<conio.h>
#include<ctype.h>
float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);
void main(){
	float a,b;
	float ans;
	char c;
	printf("Enter two numbers: ");
	scanf("%f %f",&a,&b);
	printf("Enter operator(+,-,/,*)");
	c = toupper(getch());
	if(c == '+'){
		ans = add(a,b);
	}else if (c == '-'){
		ans = sub(a,b);
	}else if (c == '/'){
		ans = div(a,b);
	}else if (c == '*'){
		ans = mul(a,b);
	}else{
		printf("Invalid operator!!");
	}
	printf("Ans = %.2f",ans);
	
}



float add(float a,float b){
	return a + b;
}

float sub(float a,float b){
	return a - b;
}

float div(float a,float b){
	return a / b;
}

float mul(float a,float b){
	return a * b;
}
