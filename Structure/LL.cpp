#include<stdio.h>
#include<stdlib.h>
struct node {
	int info;
	struct str *link;
};
struct node *create_LL(struct node *start)
{   
	int n,i,data;
	printf("How many data you want to create\n");
				scanf("%d",&n);
				for(i=1;i<=n;i++)
				{
					printf("Enter [%d] data",i);
					scanf("%d",&data);
				}
	struct node *tmp;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->info = data;
	tmp->link = start;
	start=tmp;
	return *start;
}
int main()
{
	
	struct node *start = NULL;
	int choise, data ,pos, item;
	while(1)
	{
		printf("Enter the Choise to be performed\n");
		printf("1 -> Create LL \n");
		scanf("%d",&choise);
		switch(task){
			case 1: 
			{
				start = create_LL(start);
				break;
			} 
			case 2:
				exit(1);
		}
	}
}
