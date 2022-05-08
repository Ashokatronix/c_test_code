#include<stdio.h>
int main(){
	int x=25,*p,**pa;
	p=&x;
	pa=&p;
	printf("x = %d  \n", &x );
	printf("p pointing to  = %d  \n", p );
	printf("val of p = %d  \n", *p );
	printf("p = %d  \n", &p );
	printf("pa pointing to=%d  \n", pa );
	printf("val of pa = %d  \n",*pa  );
	printf("add of Pa = %d \n",&pa  );
	printf("add of Pa = %d \n",**pa  );
}
