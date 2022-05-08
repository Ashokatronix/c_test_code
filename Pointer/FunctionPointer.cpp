#include<stdio.h>
void ref(int *p,int *q);
int main(){
	int a=5,b=10;
	
	printf("%d, %d\n",a,b);
	ref(&a,&b);
	printf("%d, %d\n",a,b);
}

void ref(int *p, int *q){
	(*p)+20;
	(*q)++;
}
