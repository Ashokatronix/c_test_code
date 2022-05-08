//problem of 9.10 and 9.8

#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int *ptr;

//	int *ptr[5];
//		for (int i =0;i<5;i++){
//		ptr[i]=&arr[i];
//	}                                           //uncomment this to run

ptr=arr;

//	for(int i=0;i<5;i++){
//		printf("Pointer notation of Arr[%d]= %d\t",i,*ptr[i]);
//		printf("Pointer notation of Arr[%d]= %d\t",i,ptr[i]);
//		printf("Pointer notation of Arr[%d]= %d\n",i,sizeof(*ptr[i]));
//	}

for(int i=0;i<5;i++){
		printf("Pointer notation of Arr[%d]= %d\t",i,*(ptr+i));
		printf("Pointer notation of Arr[%d]= %d\t",i,ptr[i]);
//		printf("Pointer notation of Arr[%d]= %d\n",i,sizeof(*(ptr+i));
printf("Pointer notation of Arr[%d]= %d\n",i,sizeof(ptr[i]));
	}

//	for(i=0;i<5;i++){
//		printf("Pointer notation of Arr[%d]= %d\n",i,*ptr[i]);
//	}
}
//Pointer to an Array

