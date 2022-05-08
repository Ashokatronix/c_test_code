#include<stdio.h>
int n, final=0;
int fabo(int a);
int main(){
	printf("Enter number of line to be print\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	final = fabo(i);
	printf("%d  ",final);	
	}
	return 0;
}
int fabo(int a){
	if(a==0||a==1)
	 return 1;
	return (fabo(a-1)+fabo(a-2));	
}
