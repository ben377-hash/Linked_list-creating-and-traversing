#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node {
        int data;
        struct node *link;
    };
    struct node *head=NULL,*newnode,*temp;
    int choice=1;
    while(choice){
        newnode=malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        
        if(head==NULL)
            {
                head=temp=newnode;
            }
            else{
             temp->link = newnode;
            temp = newnode;
            }
        //temp->link=newnode;
    
    printf("Want to continue ");
    scanf("%d",&choice);
    }
    //traversing 
    
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
    // free alocating space
    temp = head;
    while (!temp) {
        struct node* nextNode = temp->link;
        free(temp);
        temp = nextNode;
    }
    return 0;
}
