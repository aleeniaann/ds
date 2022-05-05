//postfix evaluation

#include<stdio.h>
#include<ctype.h>
#define maxsize 100
#define postfixsize 100
int stack[maxsize];
int top=-1;

void push(int item){
    if(top==maxsize-1){
        printf("stack overflow");
        return;
    }
    else {
        top++;
        stack[top]=item;
    }
}

int pop(){
    int item;
    if(top==-1){
        printf("underflow");
        //return;
    }
    else {
        item=stack[top];
        top--;
        return item;
    }
}
void EvalPostFix(char postfix[]){
    int i;
    char ch;
    int A,B;
    int val;
    for
    (i=0;postfix[i]!='#';i++){
        ch=postfix[i];
        if(isdigit(ch)){
            push(ch-'0');
        }
        else if(ch=='^'||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            A=pop();
            B=pop();

            switch(ch){
                case '^': val=B^A;
                        break;
                case '+': val=B+A;
                        break;
                case '-': val=B-A;
                        break;
                case '*': val=B*A;
                        break;
                case '/': val=B/A;
                        break; 
                default: printf("invalid case!");
            }
            push(val);
        }
    }
    printf("\nResult pf exp is %d\n", pop());
}


void main(){
    int i;
    char postfix[postfixsize];
    printf("enter postfix exp and add # at the end: ");
    for(int i=0;i<postfixsize;i++){
        scanf("%c",&postfix[i]);

        if(postfix[i]=='#'){
            break;
        }
    }

    EvalPostFix(postfix);
}