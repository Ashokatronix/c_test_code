#include<stdio.h>

int main(){
	int n,i,j,k,l;
	printf("Enter the height of piramid\n");
	scanf("%d",&n);
	
	for(i = 0; i<n;i++)
	{
		for(k=0; k<n-i;k++)
		{
			printf(" ");
		}
		for(j=0; j<i; j++)
		{
			printf("%d",i-j);
		}
		for(l=i-1; l>0; l--)
		{
			printf("%d",i-l+1);
		}
		printf("\n");
	}
}
