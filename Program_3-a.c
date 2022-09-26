#include <stdio.h>
#define max 10

void push();
void pop();
void display();
void peek();
int top = -1, stack[max];

int main()
{
    int ch;
    int c = 1;
    while (c)
    {
        printf("\n 1- PUSH");
        printf("\n 2- POP");
        printf("\n 3- TOP");
        printf("\n 4- Display Stack");
        printf("\n 5- Exit");
        printf("\n Enter your choice:");
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
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            c=0;
            break;
        default:
            printf("\n Wrong choice");
            break;
        }
    }
    return 0;
}

void push()
{
    int item;
    if (top == max - 1)
        printf("\n stack is overflow");
    else
    {
        printf("\n Enter the new insert item:-");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
    }
}
void pop()
{
    int item;
    if (top == -1)
        printf("\n stack is underflow");
    else
    {
        item = stack[top];
        printf("\n remove item from stack is :%d", item);
        top = top - 1;
    }
}
void peek()
{
    int item;
    if (top == -1)
    {
        printf("\nstack is underflow");
    }
    else
    {
        item = stack[top];
        printf("\n The top most element of the stack is :%d", item);
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("stack is Empty");
    }
    else
    {
        printf("\n The elements of the Stack are:");
        for (i = top; i >= 0; i--)
        {
            printf("%d\t", stack[i]);
        }
    }
}