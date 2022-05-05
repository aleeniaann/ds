//stack using linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
     
}*newnode,*top, *ptr;

void push(){
    if (top==NULL)
    {
        newnode= (struct node*)malloc(sizeof (struct node));
        printf("enter element");
        scanf("%d", &newnode->data);
        newnode->next=NULL;
        top=newnode;
    }
    else {
        newnode= (struct node*) malloc(sizeof(struct node));
        printf("enter data ");
        scanf("%d", &newnode->data);
        newnode->next=top;
        top=newnode;
    }
    
}
void pop(){
    if(top==NULL)
    printf("underflow");
    else {
        ptr=top;
        printf("deleted element is ", ptr->data);
        top=top->next;
        free(ptr);
    }
}
void display(){
    if(top==NULL){
        printf("underflw");

    }
    else {
        printf("entered stack is");
        ptr=top;
        while(ptr!=NULL){
            printf("%d", ptr->data);
            ptr=ptr->next;
        }
    }
}

void main(){
    top=NULL;
   /* push();
    pop();
    push();
    push();
    display();
    pop();
    display();*/

    int ch;
    do {
        printf("choose from\n 1. push \n 2.pop \n 3. display \n 4. exit");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;

             case 2:
            pop();
            break;

             case 3:
            display();
            break;

             case 4:
            exit(0);
            break;
        
        default:
            printf("invalid case");
        }
    }while(ch<5);
}
