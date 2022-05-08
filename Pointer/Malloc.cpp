#include<stdio.h>
#include<stdlib.h>
int main(){
	char *p;
	char *o;
	printf("Size of p before %d\n",sizeof(p)); 
	p=(char *)malloc(10*sizeof(char));
	
	if(p==NULL)
	{
		printf("Memory is not avalible");
		exit(1);
	}
	o=p;
	for (int i=0;i<15;i++){
		printf("Enter %d int\n",i);
		p[i]=i+2;
	}
	for (int i=0;i<15;i++){
		printf("P[%d]=%d\t",i,*(p+i));
	}
	printf("Size of p After %d\n",p[-1]);
	free(p);
}
