#include<stdio.h>
#include<stdlib.h>
void ashok(void)
{
	int aa=10;
	int bb=100;
	int cc=1000;
	int arr[100];
	printf("\nlocal stack %d ",&arr);
	ashok();
}
int main()
{
	static int a=10;
	static int b=10;
	static int c=15;
	while(a--)
		printf("heap %d --> %d --> %d \n\n",&a,&b,&c);
	ashok();
	return 0;
}
