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
    int i, n, data;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    start == NULL;
    if(n==0)
        return start;
    printf("Enter the element to be inserted : ");
    scanf("%d", &data);
    start = addatbeg(start, data);
    for(i = 2; i <=n; i++)
    {
        printf("Enter the element to be inserted : ");
        scanf("%d", &data);
        start = addatend(start, data);
    }
    return start;
}/*End of create_list()*/

void display (struct node *start)
{
    if(start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *p = start;             // p = start; is use next line
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
}/*End of count()*/

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
}/*End of search()*/
    
struct node * addatbeg(struct node *start, int data)
{
    struct node *p = start, *temp;
    temp = (struct node *) malloc (sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}/*End of addatbeg()*/

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
}/*End of addatend()*/

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
}/*End of addafter()*/

struct node * addbefore(struct node *start, int data, int item)
{
    struct node *temp, *p =  start;
    while(p->link != NULL)
    {
        if(p->link->info == item)
        {
            temp = (struct node *) malloc (sizeof(struct node));
            temp->info = data;
            temp->link = p->link;
            p->link = temp;
            return start;
        }
        p = p->link;
    }
    printf("%d not present in the list\n",item);
}/*End of addbefore()*/

struct node * addatpos(struct node *start, int data, int pos)
{
    // if(start == NULL)
    // {
    //     printf("List is empty");
    //     return;
    // }
    struct node *temp, *p =  start;
    temp = (struct node *) malloc (sizeof(struct node));
    temp->info = data;
    if(pos == 1)
    {
        
        temp->link = start;
        start = temp;
        return start;
    }
    if(pos >= 2)            //handle mid position and end position
    {
        int index = 2;
        while(p->link != NULL)
        {
            if(index == pos)
            {
                temp->link = p->link;
                p->link = temp;
                return start;
            }
        p = p->link;
        }
        printf("There are less than %d elements\n", pos);
    }

    /* Alternet code for pos >= 2
    **********
    p = start;
    for(int i = 1; i< pos-1 && p != NULL; i++)
        p = p->link;
    if(p==NULL)
        printf("There are less than %d elements\n", pos);
    else
    {
        temp->link = p->link;
        p->link = temp;
    }
    return start;
    **********
    */
}/*End of addatpos()*/

struct node * del(struct node *start, int data)
{
    struct node *tmp, *p;
    if(start == NULL)
    {
        printf("List is empty\n");
        return start;
    }
    if(start->info == data) /*Deletion of first node*/
    {
        tmp = start;
        start = start->link;
        free(tmp);
        return start;
    }
    p = start;              /*Deletion in between or at the  end*/
    while(p->link != NULL)
    {
        if(p->link->info == data)
        {
            tmp = p->link;
            p->link = tmp->link;
            free(tmp);
            return start;
        }
        p = p->link;
    }
    printf("Element %d not found\n", data);
    return start;
}/*End of del()*/

struct node * reverse(struct node *start)
{
    struct node *prev, *ptr, *next;
    prev = NULL;
    ptr = start;
    while(ptr != NULL)
    {
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev;
    return start;
}/*End of reverse()*/

