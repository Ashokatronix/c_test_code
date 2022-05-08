#include<stdio.h>
long var = 0;
long rem=0;
long binary = 0;
long a =1;
int num1=0;
int num2=0;
int main(){
	printf("Enter any valid Number\n");
	scanf("%d",&var);
	while(var>0)
	{
		rem = var%2;
		printf("%d\t",rem);
		num1 = num1+rem*a;
		var= var/2;
		a=a*10;		
	}
	
	printf("\nbinary is %d",num1);
	//rev
/*	while(num1>0)
	{
		int temp;
		temp = num1%10;
		num2 = num2*10+temp;
		num1 = num1/10;
	}
	printf("\nRev binary is %d",num2);
	
	
	for(int i=0;i<64;i++)
	{
		break;
		
	}*/
}
