#include<stdio.h>
#include<string.h>
struct cunt{
	char color[10];
	int time;
	float size;
};
int main(){
	struct cunt std1, std2;
	strcpy(std1.color,"pink");
	printf("Enter the size of cunt and how many time you fucked \n");
	scanf("%f %d",&std1.size,&std1.time);
	printf("Color of your cunt is %s, size of your cunt is %f, total time you fucked is %d\n",std1.color,std1.size,std1.time);
	return 0;
}
