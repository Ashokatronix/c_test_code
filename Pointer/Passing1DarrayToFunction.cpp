#include<stdio.h>
void fun(int arr[]);

int main(){
	int trr[5]={1,2,3,4,5};
	fun(trr);
	for(int i = 0;i<5;i++){
		printf("A[i]=%d\t",trr[i]);
	}
	
}

void fun(int arr[]){
		for(int i = 0;i<5;i++){
		arr[i]=arr[i]+2;
	}
		for(int i = 0;i<5;i++){
		printf("b[i]=%d\t",arr[i]);
	}
	printf("\n");
}
