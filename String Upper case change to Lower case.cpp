#include<stdio.h>
char a[10] ;
int i=0;
int main(){
	printf("Enter the String\n");
	scanf("%s",&a);//
/*	
	printf("Your Enter String is =\t");
		printf("%s",a);
	
	for(i =0;i<=10;i++){
		if(a[i]>='A' && a[i]<='Z')
		{
			printf("\nUpper1 Case = %c\t",a[i]);
			a[i]=a[i]+32;
			printf("\nLower1 Case = %c\t",a[i]);
		}
		else if(a[i]>='a' && a[i]<='z')
		{
			printf("\nLower2 Case = %c\t",a[i]);
			a[i]=a[i]-32;
			printf("\nUpper2 Case = %c\t",a[i]);
		}
		printf("\ninside Loop\t");
	}
	printf("\nCase Changed String =\t");
		printf("%s",a);
		*/
		while(a[i])
		{
			//printf("%c",a[i]);
			//32
			a[i]=a[i]^(1<<5);//toggle
			i++;
			
		}
		
		a=Ascaii
		//32=10101010101010101001
		printf("%s",a);
}
