#include<stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of stack

struct Stack{
    int items[MAX];
    int top;
};

// Initialisation of Stack
void initStack(struct Stack *s)
{
    s -> top = -1;
}

// Stack is full
int isFull(struct Stack *s)
{
    return s -> top == MAX-1;
}

int isEmpty(struct Stack *s)
{
    return s -> top == -1;
}

void push(struct Stack *s, int val)
{
    if (isFull(s))
    {
        printf("Stack is full !");
    }
    s -> items[++(s->top)] = val;

    printf("Pushed %d into the stack \n", val);
}

int pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is Empty");
        return -1;
    }else
        return s -> items[(s->top)--];
}

void Display(struct Stack *s){
    if (isEmpty(s))
    {
        printf("Stack is Empty");
        return;
    }
    printf("Stack elements : ");
    for (int i = 0; i <= s-> top; i++)
    {
        printf("%d ", s->items[i]);
    }
}
    void main(){
        struct Stack s;
        initStack(&s);

        push(&s, 10);
        push(&s, 20);
        push(&s ,30);

        Display(&s);
    }