#include<stdio.h>
#define max 2
int queue[max],ch,x,i,front=-1,rear=-1;
void insert();
void delete();
void display();
int main()
{


    while(1)
    {
        system("cls");
        printf("\n1.insert\n2.delete\n3.display\n4.exit point\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default :
            printf("u entered wrng key");


        }
        getch();
    }
    getch();
}
void insert()
{
    if(rear==max-1)
    {
        printf("the queue is full\n");
        return;
    }
    else if(front==-1&&rear==-1)
     {
         front=0,rear=0;
     }
    else
        rear++;
    printf("enter the value to inserted\n");
    scanf("%d",&x);
    queue[rear]=x;
}
void delete()
{
    if(front==-1 && rear == -1){
        printf("the queue is empty\n");
        return;
    }
    else if(front ==rear){
        front = -1, rear = -1;
    }
    else{
        front++;
    }
    printf("the element deleted");
}
void display()
{
    if(front==-1)
    {
        printf("the queue is empty");
    }
    else
        for(i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
}
