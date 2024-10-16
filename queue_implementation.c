#include<stdio.h>
#define QSIZE 5
void push(int* rear,int q[],int elem)
{
    if((*rear) >= (QSIZE-1))
    {
        printf("queue overflow \n");
        return;
    }
    else
    {
        (*rear)++;
        q[*rear] = elem;
    }
}
int delete(int* rear,int* front,int q[])
{
    if((*front) > (*rear))
    {
        printf("queue underflow \n");
        return -1;
    }
    else
    {
        int delete_elem = q[*front];
        (*front)++;
        return delete_elem;
    }
}
void display(int* front,int* rear,int q[])
{
    if((*front) > (*rear))
    {
        printf("no elements to display,empty queue \n");
        return;
    }
    else
    {
        printf("QUEUE HAS:");
        for(int i = (*front); i<=(*rear) ; i++)
        {
            printf("%d ",q[i]);
        }
        printf("\n");
    }
}
void main()
{
    int q[QSIZE];
    int front = 0;
    int rear = -1;
    int elem;
    int deleted_elem;
    while(1)
    {
              int choice;
        printf("enter choice: \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:

             printf("enter the element to push \n");
             scanf("%d",&elem);
             push(&rear,q,elem);
             break;
        case 2:
             deleted_elem = delete(&rear,&front,q);
             if(deleted_elem != -1)
             {
                printf("popped element: %d",deleted_elem);
             }
             printf("\n");
             break;
        case 3:
             display(&front,&rear,q);
             break;
        default:
            printf("invalid choice \n");
            break;
        }
    }
}






























