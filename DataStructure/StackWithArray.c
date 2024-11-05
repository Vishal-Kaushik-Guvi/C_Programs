#include <stdio.h>
#define MAX 5

int Stack[MAX];

int top = -1;

int isFull()
{
    return top == MAX - 1;
}

int isEmpty()
{
    return top == -1;
}

void push(int value)
{
    if (isFull())
    {
        printf("Stack is Full !! \n");
    }
    else
    {
        top++;
        Stack[top] = value;
        printf("Element %d is added into the stack \n", value);
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack is Empty !! \n");
    }
    else
    {
        int value = Stack[top];
        top--;
        printf("Element %d is removed from the stack !! \n", value);
    }
}

int peek()
{
    return Stack[top];
}

int main()
{
    push(10);
    push(20);
    push(30);

    printf("%d is the Peek Element \n", peek());

    pop();
}
