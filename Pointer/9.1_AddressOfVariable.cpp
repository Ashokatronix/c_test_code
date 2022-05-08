#include<stdio.h>
int main(){
	//Pointer define
	long z = 5,y=8, *ptr[2];
	ptr[0]=&z;
	ptr[1]=&y;
	int x;
	printf("%p\n",&z);
	printf("%p\n",z);
	printf("%p\n",ptr);
	printf("%p\n",*ptr);
	printf("%p\n",&ptr);
	printf("%d\n",&z);
	printf("%d\n",z);
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	//Size of Pointer.
	printf("\n");
	printf("%u\n",sizeof(ptr));//64 bit system so 8
	printf("%u\n",sizeof(*ptr));
	//Pointer Arithmetic
	printf("\n");
	ptr++;
	printf("%d\n",ptr);//double take shift of 8 byte, long and int take 4 byte.
	ptr--;
	printf("%d\n",ptr);
	//precedence of dereferencing
	printf("\n");
	x= *ptr++;
	printf("%d\t",x);
	x=0;
	x= *++ptr;
	printf("%d\t",x);
	x=0;
	x=(*ptr)++;
	printf("%d\t",x);
	x=0;
	x=++*ptr;
	printf("%d\n",x);
	
	
}
