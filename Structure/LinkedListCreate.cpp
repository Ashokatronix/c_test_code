#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void printLL(struct Node *head)
{   
	if(head == NULL)
	{
		printf("No data is available\n");
		return;	
	}
    int count =1;
    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node));
    while(ptr!=NULL)
    { 
        printf("Node %d ,data is %d\n",count,ptr->data);
        count=count + 1;
        ptr=ptr->next;
    }
}

struct Node *addAtBeg(struct Node *head)
{
    int n;
    printf("Enter the intger you want add\n");
    scanf("%d",&n);
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=n;
    ptr->next= head;
    head=ptr;
    free(ptr);
    return head;
}

struct Node *addAtEnd(struct Node *head)
{
	int n;
    printf("Enter the intger you want add\n");
    scanf("%d",&n);
    struct Node *tmp, *ptr;
    tmp = (struct Node *)malloc(sizeof(struct Node));
    tmp->data = n;
    ptr = head;
    while(ptr->next!=NULL)
    {
    	ptr= ptr->next;
	}
	ptr->next = tmp;
	tmp->next = NULL;
	return head;
}
int main()
{
    int item, i, pos, choise;
    struct Node *head = NULL; 
    //head = (struct Node *)malloc(sizeof(struct Node));
    
    while(1)
    {
        printf("Press 1 - Enter data at begning\n");
        printf("Press 2 - Enter data at the End of Node\n");
        printf("Press 3 - Enter data in mid of Node\n");
        printf("Press 4 - Print the Entered data in Linked list\n");
        printf("Press 5 - Exit\n");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1:
            {
                head = addAtBeg(head);
                break;
            }
            case 2:
            {
//                addAtEnd(head);
                break;
            }
            case 3:
            {
            	printf("Enter the item after you want to insert Node\n");
            	scanf("%d",&item);
//                addAtAfter(head,item);
                break;
            }
            case 4:
            {
                printLL(head);
                break;
            }
            case 5:
            {
//                addAtIndex(head);
            }
            case 6:
            	{
            		exit(1);
                	break;	
				}
        }
    }
    

}
