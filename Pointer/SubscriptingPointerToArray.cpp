#include<stdio.h>
int main(){
	//int arr[4]={1,2,3,4};
	int arr[3][4][6]={{10,11,12,13},{20,21,22,23},{30,31,32,33}};
	
//	 int *ptr[4]
int (*ptr)[4][6];
//can point to an array of 4 integer
//	ptr[0]=&arr[0];//1
 //   ptr[0]=&arr[0];
// ptr[0][1]=&arr[0][1];
 ptr = arr;
	printf("%d\t%d\t%d\t%d\n",ptr,ptr+1,ptr+2,ptr+3);
	//printf("%d\t%d\t%d\t%d\n",*ptr,*ptr+1,*ptr+2,*ptr+3);
	//printf("%d\t%d\t%d\t%d\n",**ptr,*(*ptr+1),*(*ptr+2),*(*ptr+3));
	//printf("%d\t%d\t%d\t%d\n",ptr[0],ptr[1],ptr[2],ptr[3]);
}
