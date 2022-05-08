#include<stdio.h>
void ref(int a ,int b,int *p,int *q,int *r);
int main(){
	int a=5,b=10,sum,min,mul;
	
//	printf("%d, %d\n",a,b);
	ref(a,b,&sum,&min,&mul);
	printf("%d,\t %d,\t %d\n",sum,min,mul);
}

void ref(int a,int b,int *p,int *q,int *r){
	*p = a+b;
	*q = a-b;
	*r =a*b;
}
