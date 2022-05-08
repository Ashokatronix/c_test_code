#include<stdio.h>
long int binary(int num);
int rem[64]={0};
int main(){
	int num;
	printf("enter a number\t= ");
	scanf("%d",&num);
	printf("Dec = %d, Bin = %ld\n",num,binary(num));
	return 0;
}
long int binary (int num){
	long a =1,bin =0;
	int j,i,rem2[64]={0};;
	
	while(num>0){
		rem[i]=num%2;
		num = num/2;
		i++;
	}
	for (int j=i-1;j>=0;j--)
	{
		rem2<<rem[j];
	}
	return rem2;
}
