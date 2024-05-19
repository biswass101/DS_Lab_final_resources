#include<stdio.h>
#include<stdlib.h>

#define SIZE 4

int top = -1, stack[SIZE];
void push(int x)
{
    if(top == SIZE - 1)
    {
        printf("Overflow!\n");
    }
    else
    {
        top += 1;
        stack[top] = x;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        top -= 1;
    }
}
void show()
{
    if(top == -1)
    {
        printf("Underflow!!");
     }
     else
     {
         for (int i = top; i >= 0; i--)
         {
             printf("%d\n", stack[i]);
         }
     }
}
int main()
{
    while(1)
    {
        printf("Choose Option\n");
        printf("1. push()\n");
        printf("2. Pop()\n");
        printf("3. show()\n");
        printf("4. Exit\n");
        
        int choice;
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("Enter the element to be pushed: ");
            int ele; scanf("%d", &ele);
            push(ele);
        }
        else if(choice == 2)
        {
            pop();
        }
        else if(choice == 3)
        {
            show();
            printf("\n");
        }
        else
        {
            break;
        }
    }
    return 0;
}