#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};

struct node * create_list(struct node *start);
void display (struct node *start);
void count (struct node *start);
void search (struct node *start, int data);
struct node * addatbeg(struct node *start, int data);
struct node * addatend(struct node *start, int data);
struct node * addafter(struct node *start, int data, int item);
struct node * addbefore(struct node *start, int data, int item);
struct node * addatpos(struct node *start, int data, int pos);
struct node * del(struct node *start, int data);
struct node * reverse(struct node *start);

int main()
{
    struct node *start = NULL;
    int choice, data, item, pos;
    while(1)
    {
        printf("1. Create List\n"
                "2. Display\n"
                "3. Count\n"
                "4. Search\n"
                "5. Add to empty list | Add at beginning\n"
                "6. Add at end\n"
                "7. Add after node\n"
                "8. Add before node\n"
                "9. Add at position\n"
                "10. Delete\n"
                "11. Reverse\n"
                "12. Quit\n\n"
                "Enter your choice : ");
        scanf("%d", choice);
        switch(choice)
        {
            case 1:
                    start = create_list(start);
                    break;
            case 2:
                    display(start);
                    break;
            case 3:
                    count(start);
                    break;
            case 4: 
                    printf("Enter the element to be searched : ");
                    scanf("%d", &data);
                    search(start, data);
                    break;
            case 5:
                    printf("Enter the element to be inserted : ");
                    scanf("%d", & data);
                    start = addatbeg(start, data);
                    break;
            case 6: 
                    printf("Enter the element to be inserted : ");
                    scanf("%d", & data);
                    start = addatend(start, data);
                    break;
            case 7: 
                    printf("Enter the element to be inserted : ");
                    scanf("%d", & data);
                    printf("Enter the element after which to insert : ");
                    scanf("%d",&item);
                    start = addafter(start, data, item);
                    break;
            case 8:
                    printf("Enter the element to be inserted : ");
                    scanf("%d", & data);
                    printf("Enter the element before which to insert : ");
                    scanf("%d",&item);
                    start = addbefore(start, data, item);
                    break;
            case 9:
                    printf("Enter the element to be inserted : ");
                    scanf("%d", & data);
                    printf("Enter the element position which to insert : ");
                    scanf("%d",&pos);
                    start = addatpos(start, data, pos);
                    break;
            case 10:
                    printf("Enter the element to be deleted : ");
                    scanf("%d", & data);
                    start = del(start, data);
                    break;
            case 11:
                    start = reverse(start);
                    break;
            case 12:
                    exit(1);
            default: 
                    printf("Wrong choice\n");

        }/*End of switch*/
    }/*End of while*/
}/*End of main()*/

struct node * create_list(struct node *start)
{

}

void display (struct node *start)
{
    if(start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *p = start;
    printf("List is :\n");
    while(p != NULL)
    {
        printf("%d ",p->info);
        p = p->link;
    }
    printf("\n\n");
}/*End of display()*/

void count (struct node *start)
{
    struct node *p;
    int cnt = 0;
    p = start;
    while(p != NULL)
    {
        p = p->link;
        cnt++;
    }
    printf("Number of element are %d\n",cnt);
}/*End of count*/

void search (struct node *start, int item)
{
    
    int pos = 1;
    struct node *p;
    p = start;
    while(p != NULL)
    {
        if(p->info == item)
        {
            printf("Item %d found at position %d\n", item, pos);
            return;
        }
        p = p->link;
        pos++;
    }
    printf("Item %d not found in list\n", item);
}/*End of search*/
    
struct node * addatbeg(struct node *start, int data)
{
    struct node *p = start, *temp;
    temp = (struct node *) malloc (sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}/*End of addatbeg*/

struct node * addatend(struct node *start, int data)
{
    struct node *p = start, *temp;
    temp = (struct node *) malloc (sizeof(struct node));
    temp->info = data;
    while(p->link != NULL)
        p = p->link;
    p->link = temp;
    temp->link = NULL;
    return start;
}/*End of addatend*/

struct node * addafter(struct node *start, int data, int item)
{
    struct node *temp, *p = start;
    while(p->link != NULL)
    {
        if(p->info == item)
        {
            temp = (struct node *) malloc (sizeof(struct node));
            temp->info = data;
            temp->link = p->link;
            p->link = temp;
            return start;
        }
        p = p->link;
    }
    printf("%d not present in the list\n", item);
}/*End of addafter*/

struct node * addbefore(struct node *start, int data, int item)
{

}
struct node * addatpos(struct node *start, int data, int pos)
{

}
struct node * del(struct node *start, int data)
{

}
struct node * reverse(struct node *start)
{

}

