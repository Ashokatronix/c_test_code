 #include <stdio.h>
 #include <stdlib.h>
 
 
 int main(void)
 {
 	FILE *fptr;
 	int ch;
 	if((fptr = fopen("myfile","r"))==NULL)
 	{
 		printf("Error in opening file\n");
 		exit(1);
	}
//	 printf("Enter text :\n");
	ch = fgetc(fptr);
	while(ch != EOF)
	{
	 printf("%c",ch);
	 ch = fgetc(fptr);	
	}
//	 while((ch = fgetc(fptr))!=EOF)
//	 printf("%c",ch);
//	 	fputc(ch,fptr);
		
	fclose(fptr);
	return 0;
 }
