//priority queue

#include<stdio.h>
#include<stdlib.h>
#define maxsize 100

typedef struct {
    int key, p;
}element;

element queue[maxsize];
int rear=-1, front=-1;

void add(element item){
    if(rear==maxsize-1)
    printf("full");
     else {
        if(rear==-1&&front==-1)
        front=0;
        queue[++rear]=item;
     }
}

element delete(){
    int i,j;
    element temp,item;

    for(i=0;i<=rear;i++){
        for(j=i+1;j<=rear;j++){
            if(queue[i].p<queue[j].p){
                temp=queue[j];
                queue[j]=queue[i];
                queue[i]=temp;
            }
        }
    }

    if(front==-1&&rear==-1)
    printf("empty");
    else {
        item=queue[front];
        if(front==rear)
        front=rear=-1;
        else
        front++;
        
    }return item;
}

void disp(){
    int i;
    if(front==-1&&rear==-1)
    printf("empty");

    else {
        printf("queue key= ");
        for(;i<rear;i++)
        printf("%d", queue[i].key);
    }
}
void main(){
   int ch,x;
   element elem,p;
    do {
        printf("choose from\n 1. add \n 2.del \n 3. display \n 4. exit");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:printf("enter item to be added");
            scanf("%d",&elem.key);
            printf("enter priority");
            scanf("%d", &elem.p);
            add(elem);

            //add();
            break;

             case 2: if(front>-1)
             x=1;
             p=delete();
                if(x==1)
                printf("deleted elem: %d", p.key);
            //delete();
            break;

             case 3:
            disp();
            break;

             case 4:
            exit(0);
            break;
        
        default:
            printf("invalid case");
        }
    }while(ch<5);
}