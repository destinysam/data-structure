#include<stdio.h>
int stack[100],x,n,i,top,choice;
void push(void);
void pop(void);
void display(void);
int main()
{
    int top=-1;
    printf("enter the elements of arraystack are");
    scanf("%d",&n);
    printf("the stacks elements are \n");
    printf("-------------------------------\n");
    printf("\n\t 1. push\n\t 2. pop\n\t 3. display\n\t 4. exit\n\t ");
    do
    {

        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 :
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
                display();
                break;
            case 4:
                printf("exit point ");
                break;
            default :
                printf("u entered wrong key");
        }
    }
            while(choice!=4);
            return 0;


    }

void push()
{
if(top>=n)
    {
    printf("the stack is full\n");
}
else
{


            printf("enter the elements u want to push");
                    scanf("%d",&x);
                    top++;
                    stack[top]=x;
}
}
void pop()
{
    if(top<=-1)
    {

        printf("the stack is under flow \n");
    }
    else
    {

        printf("the popped elements are %d\n",stack[top]);
        top--;
    }
    }
    void display()
    {
        if(top>=0)
            {

        printf("entered elements are\n");
        for(i=top;i>=0;i--){
            printf("%d\n  ",stack[i]);
        }
            printf("enter the next choice\n");

        }
        else
        {



            printf("the stack is empty \n");


    }
    }
