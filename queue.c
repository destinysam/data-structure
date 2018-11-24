#include<Stdio.h>
int queue[100],n,x,choice;
void enqueue(void);
void dequeue(void);
int main()
{

    int rare=0,front=0;
    printf("enter the no of terms u want\n");
    scan("%d",&n);
    printf("the elements in a queue are\n");
    printf("---------------------------------\n");
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit point\n");
    do
    {

        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {

        case 2:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("exit point\n");
            break;
        default:
            printf("u entered wrong choice\n");


        }
    }
    while(choice!=4);
    return 0;
}
void enqueue()
{

    if(rare===n)
    {
        printf("the stack is full\n");
    }
    else if(front=rare=0)
    printf("enter the no to be enqueued\n");
    scanf("%d",&x);
    front++;
    rare++;
    queue[rare]=x;
}
