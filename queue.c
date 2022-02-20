//queue

#include<stdio.h>
#include<stdlib.h>
#define size 5

int front=-1,rear=-1,queue[size];
void enq();
void deq();
void show();

void main(){
    int i=0,choice;
    while(i>=0){
        printf("\nChoose the operation you want to perform: ");
        printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
        scanf("%d",&choice);

        switch(choice){
            case 1:enq();
                    break;
            case 2:deq();
                    break;
            case 3:show();
                    break;
            case 4:exit(0);
        }
    }
}

void enq(){
    int item;
    if(rear==size-1){
        printf("\nQueue is full!");
    }
    else {
        if(front==-1)
        front=0;
        printf("\nEnter element to be inserted: ");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
    }
}

void deq(){
    int item;
    if(front==-1&&rear==-1){
        printf("\nUnderflow!");
    } 
    else if(front==rear){
        printf("\nDeleted element=%d",queue[front]);
        rear=-1;
        front=-1;
    }
    else {
        item=queue[front];
        front=front+1;
    }   
}

void show(){
    int i;
    if(front==-1&&rear==-1){
        printf("\nEmpty queue!");
    }
    else {
        printf("\nThe queue is   ");
        for(i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
    }
}