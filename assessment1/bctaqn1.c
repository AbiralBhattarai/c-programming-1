#include<stdio.h>
#include<conio.h>

void main()
{
	 int n,i,sum=0,c,j,k;
	 printf("Enter number: ");
	 scanf("%d", &n);
	for(i=0;i < n; i++)
	 {
	  sum = sum+i;

	  if(sum == n)
	  {
		printf("The number is triangular and its prime factors are: \n");
	   for(j=1;j<=n;j++){
	   	if(n%j==0){
	   		c=0;
	   		for(k=1;k<=j;k++){
	   			if(j%k == 0){
	   				c = c + 1;
				   }
			   }
			   if(c==2){
			   	printf("%d ",j);
			   }
		   }
	   }
	  }
	 }
	 getch();
}
