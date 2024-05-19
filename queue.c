#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE], front = -1, rear = -1;
void enQueue(int x)
{
    if(rear == SIZE - 1)
    {
        printf("Full");
    }
    else
    {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = x;
        printf("Inserted: %d\n", x);
    }
}

void dequeue()
{
    if(front == -1)
    {
        printf("Empty\n");
    }
    else
    {
        printf("Deleted : %d\n", queue[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}
void display()
    {
        if(rear == -1)
        {
            printf("Empty\n");
        }
        else
        {
            printf("Elements: ");
            for(int i = front; i <= rear; i++)
            {
                printf("%d ", queue[i]);
            }
            printf("\n");
        }

    }
int main()
{
    while(1)
    {
        printf("Choose Option\n");
        printf("1. enQueue()\n");
        printf("2. deQueue()\n");
        printf("3. display()\n");
        printf("4. Exit\n");
        int choice;
        scanf("%d", &choice);
        if(choice == 1)
        {
            int ele; scanf("%d", &ele);
            enQueue(ele);
        }
        else if(choice == 2)
        {
            dequeue();
        }
        else if(choice == 3)
        {
            display();
        }
        else
        {
            break;
        }
    }
    return 0;
}