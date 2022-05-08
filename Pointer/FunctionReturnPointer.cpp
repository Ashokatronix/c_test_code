#include<stdio.h>
int *fun(int *p,int a);
int main(){
	int i=6,arr[5]={1,2,3,4,5};
	int *ptr;
	ptr=fun(arr,i);
	printf("value of arr = %d, Value of ptr = %d, value of *ptr = %d",arr,ptr,*ptr);
	return 0;
}
int *fun(int *p,int a){
	printf("value of arr[0] = %d\n",p);
	printf("value of a = %d\n",a);
	*p=*p+a;
//	p=p+a;
	printf("value of p = %d\n",p);
	return p;
}
