#include<stdio.h>
#include<string.h>
struct cunt{
	char color[10];
	int time;
	float size;
};
int main(){
	struct cunt one, two;
	strcpy(one.color,"pink");
	printf("Enter the size of cunt and how many time you fucked \n");
	scanf("%d %f",&one.size,&one.time);
	printf("Color of your cunt is %s, size of your cunt is %d, total time you fucked is %f",one.color,one.size,one.time);
}
