//circular queue

#include<stdio.h>
#include<stdlib.h>
#define size 5

int front=-1,rear=-1,queue[size];
void insert();
void delete();
void show();

void main(){
  int choice;

  do {
  printf("\nChoose the operation to be performed on circular queue: ");
  printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
  scanf("%d",&choice);

  switch (choice)
  {
  case 1: insert();
          break;
        
  case 2: delete();
          break;

  case 3: show();
          break;
  
  case 4: exit(0);
  }
  }while(choice<4);

}


void insert(){
  int item;
  printf("\nEnter element to be inserted: ");
  scanf("%d",&item);
  if(front==-1&&rear==-1){
  front=0;
  rear=0;
  queue[rear]=item;
  }
  else if(front==(rear+1)%size)
  printf("\nOverflow!");
  else
  rear=(rear+1)%size;
  queue[rear]=item;
}

void delete(){
  int item;
  if(front)
}