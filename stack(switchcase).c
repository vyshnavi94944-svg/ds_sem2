#include<stdio.h>
#define MAX 10
#include<stdlib.h>
int S[MAX];
int top = -1;

// push
push()
{
    int ele;
    if(top == MAX - 1)
    {
        printf("Stack is full");
    }
    else
    {
        printf("Enter element");
        scanf("%d", &ele);
        top++;
        S[top] = ele;
    }
}

// display
display()
{
    int i;
    if(top == -1)
    {
        printf("Stack is empty");
        return;
    }
    printf("Elements are");
    for(i = top; i >= 0; i--)
    {
        printf("%d\n", S[i]);
    }
}

// pop
pop()
{
    int ele;
    if(top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        ele = S[top];
        top--;
    }
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
        }
    }
}
