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
		//binary = binary+rem*a;
		num1 = num1*a+rem;
		var= var/2;
		a=a*10;
		printf("%d",rem);
		//num1=num1*10+rem;//wrong what if the first digit is 0;
		
		
		//numer 01011---> rev--
		//num2 11010
	}
	
	printf("\nbinary is %d",num1);
	//rev
	while(num1>0)
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
		
	}
}
