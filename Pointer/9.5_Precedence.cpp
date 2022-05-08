#include<stdio.h>
int main(){
	//Pointer define
	long z = 5,y=8, *ptr = &z;
	int x;
	//precedence of dereferencing
	printf("\n");
	x= *(ptr++);
	printf("%d\t",x);
	x=0;
	x= *(++ptr);
	printf("%d\t",x);
	x=0;
	x=(*ptr)++;
	printf("%d\t",x);
	x=0;
	x=++(*ptr);
	printf("%d\n",x);
}
