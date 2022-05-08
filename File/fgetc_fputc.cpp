 #include <stdio.h>
 #include <stdlib.h>
 
 
 int main(void)
 {
 	FILE *sptr, *dptr;
 	int ch;
 	if((sptr = fopen("myfile","r"))==NULL)
 	{
 		printf("Error in opening file\n");
 		exit(1);
	}
	if((dptr = fopen("Destination","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	
	while((ch = fgetc(sptr)) != EOF)
	{
	 	fputc(ch,dptr);	
	}
	fclose(sptr);	
	fclose(dptr);
	return 0;
 }
