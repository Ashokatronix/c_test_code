#include<stdio.h>
#include<stdlib.h>
int main(){
	int  i, j, n, m, *p;
	printf("Enter the number of Rows in an array\n");
	scanf("%d,%d",&n,&m);
	p=(int *)calloc(n,sizeof(int));
	if(p==NULL){
		printf("Memory is not avalible\n");
	}
	for(i=0;i<n;i++)
	{
		p[i]=i+3;
//		for(j=0;j<m;j++)
//		{
//			arr[i]
//		}
	}
	for(i=0;i<n;i++)
	{
		printf("Arr[%d]=%d\t",i,p[i]);
	}
}
