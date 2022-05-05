#include<stdio.h>
#include<stdlib.h>
# define max_queue_size 100
typedef struct
{
       int key,p;
}
element;
element queue[max_queue_size];
int rear=-1;
int front=-1;
int IsFull()
{
      if(rear==max_queue_size-1)
      {
             printf("Queue is full\n");
             return 1;
      } 
      else
      return 0;
 }
 int IsEmpty()
 {
      if(front==-1)
      {
           printf("Queue is empty");
           return 1;
       }
       else 
       return 0;
 }
 void display()
 {
      int i=front;
      if(IsEmpty())
          return;
      printf("\n Queue key=");
      if(rear!=front)
      for(;i<=rear;i++)
      {
           printf("%d\n",queue[i].key);
           printf("%d",queue[i].key);
      }
  }
  void addQ(element item)
  {
        if(IsFull())
             return ;
        if(rear==-1&& front==-1)
        front=0;
        queue[++rear]=item;
  }
  element deleteQ()
  {
       int i,j;
       element temp,item;
       for(i=front;i<=rear;i++)
       {
          for(j=i+1;j<=rear;j++)
          {
                if(queue[i].p<queue[j].p)
                {
                        temp=queue[j];
                        queue[j]=queue[i];
                        queue[i]=temp;
                } 
            }
        }
        if(IsEmpty()==1)
           return ;
        else
        {
            item=queue[front];
            if(front==rear)
               front=rear=-1;
            else
               front++;
         }
         return item;
   }
   void main()
   {
           int c,x;
           element add,p;
           printf("Priority Queue Operations:\n_______\n\n");
           while(1)
           {
                 printf("1. Add element to queue\n2. Delete element from queue\n3. Display the current queue\n4.Exit\n");
                printf("enter your choice\n");
                scanf("%d",&c);
                switch(c)
             {
                   case 1: printf("enter the item to be added");
                          scanf("%d",&add.key);
                          printf("Enter the priority");
                          scanf("%d",&add.p);
                          addQ(add);
                          break;
                   case 2: if(front>-1)
                          x=1;
                          p=deleteQ();
                          if(x==1)
                          printf(" Deleted from the priority queue%d",p.key);
                          break;
                  case 3: display();
                          break;
                  case 4: exit(0); 
                  default:printf(" Invalid case\n");
            }
       }
}

