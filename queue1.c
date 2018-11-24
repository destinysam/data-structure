#include<Stdio.h>
int queue[100],n,x,choice;
int rare=-1;
int front=-1;
int main()
{

    printf("enter the no of terms u want\n");
    scanf("%d",&n);
    printf("the elements in a stack are\n");
    printf("--------------------------------\n");
    printf("\n1.inert\n2.delete\n3.display\n4.exit\n");
    while(1)
    {

        printf("enter the choice u want\n");
        scanf("%d",&choice);
        switch(choice)
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
        default:
            printf("u entered wrong choice\n");


        }
         }
}
insert()
{

    if(rare==n-1)
    {
        printf("the stack is full\n");
        return 0;
    }
    else
    {
    printf("enter the no to be enqueued\n");
    scanf("%d",&x);
    rare=rare+1;
    queue[rare]=x;
    }
}
delete()
{

    if(front==-1 || front==rare)
    {

        printf("the queue is underflow\n");

    }
    else
    {
        printf("the element is dequeud %d \n",queue[rare]);
        front=front+1;
    }
    }
    display()
    {
        if(rare==-1)
{

printf("the queue is emply\n");
    }
    else
    {
    printf("the elements are\n");
    for( int i=rare;i>=front;i--)
            printf("%d |",queue[i]);
            printf("enter your next choice \n");
    }
    }


