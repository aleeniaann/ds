//queue using linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*ptr, *f,*r;

void add(){
    int item;
    ptr= (struct node*)malloc (sizeof(struct node));
    if(ptr==NULL)
    printf("overflow");
    else {
        printf("enter item");
        scanf("%d",&item);
        ptr->data=item;
        if(front==NULL){
            front=ptr;
            rear=ptr;
            front->next=NULL;
            rear->next=NULL;
        }
        else {
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }
    }
}

void delete(){
    struct node* ptr;
    ptr=front;
    
}


