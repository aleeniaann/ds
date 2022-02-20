//stack

#include<stdio.h>
#include<stdlib.h>
#define size 4

int top=-1,stack[size];
void push();
void pop();
void show();

void main(){
    int i=0,choice;
    while(i>=0){
        printf("\nChoose the operation you want to perform: ");
        printf("\n1.Push \n2.Pop \n3.Display \n4.Exit");
        scanf("%d",&choice);

        switch(choice){
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:show();
                    break;
            case 4:exit(0);
        }
    }
}

void push(){
    int item;
    if(top==size-1){
        printf("\nOverflow!");
    }
    else {
        printf("\nEnter element to be inserted: ");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}

void pop(){
    int item;
    if(top==-1){
        printf("\nUnderflow!");
    } 
    else {
        item=stack[top];
        printf("\nElement is %d",stack[top]);
        top=top-1;
    }
}

void show(){
    int i;
    if(top==-1){
        printf("\nEmpty stack!");
    }
    else {
        printf("\nThe stack is   ");
        for(i=top;i>=0;i--)
        printf("%d\t",stack[i]);
    }
}