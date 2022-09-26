Write a program in C that implements stack using Arrays and supports the PUSH, POP, SIZE, ISEMPTY and TOP operations.Test the Program using any five Integers

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 4
                                                                                          int stack[];
int top = -1, ele;
void push();
int pop();
void display();
void main()
{
    int ch;
    // clrscr();
    do
    {
        printf("\n 1- PUSH");
        printf("\n 2- POP");
        printf("\n 3- DISPLAY");
        printf("\n 1- EXIT");

        printf("\n Enter your choice ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Element To Insert ");
            scanf("%d", &ele);
            push(ele);
            break;

        case 2:
            printf("The poped element is = %d", pop());
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
        }
    } while (ch != 4);
    getch();
}

/* Adding element */
void push(int item)
{
    if (top == MAX - 1)
        printf("\n Stack Overflow");
    else
    {
        top++;
        stack[top] = item;
    }
}

/* deleting element */
int pop()
{
    if (top == -1)
    {
        printf("Underflow");
        getch();
    }
    else
    {
        ele = stack[top];
        top--;
        return ele;
    }
}

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int main(){
//     int a[];
//     int top= -1;
//     int choice;
//     int ele, pop();
//     void push(), display();

//     do{
//         printf("/n 1- Push");
//         printf("/n 2- Pop");
//         printf("/n 3- Size");
//         printf("/n 4- IsEmpty");
//         printf("/n 5- Top");

//         printf("/n Enter Choice: ");
//         scanf("%d",&choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter Element To Insert ");
//             scanf("%d", &ele);
//             push(ele);
//             break;

//         case 2:
//             printf("The poped element is = %d", pop());
//             break;

//         case 3:
//             printf("The Size of Array is = %d", )
//             break;

//         case 4:
//             exit(0);

//         case 5:
//             printf("The Top Element of the Stack is : %d", top())
//     }
//     while{

//     }
// }
