#include<stdio.h>
int stack[100],n,x,i,top,choice;
void push(void);
void pop(void);
void display(void);
int main()
{

    top=-1;
    printf("enter the no of elements \n");
    scanf("%d",&n);
    printf("the stack elements are \n");
    printf("--------------------------\n");
    printf("\n 1.push\n 2.pop\n 3.display \n 4. exit point\n");
    do
    {

        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1 :
            push();
            break;
        case 2:
            pop();
            break;
        case 3 :
            display();
            break;
        case 4 :
            printf("exit point \n");
            break;
        default :
            printf("u entered wrong choice");

        }
        }

while(choice!=4);
return  0;
}
void push()
{

    if(top==n-1)
    {

        printf("the stack is overflow\n");

    }
    else
    {


        printf("enter the number to be pushed");
    scanf("%d",&x);
    top++;
    stack[top]=x;
    }
}
void pop()
{

    if(top<=0)
    {

        printf("the stack is underflow \n");

    }
    else
    {


        printf("the popped element are %d \n",stack[top]);
    top--;
}
}
void display()
{
    if(top<=0)
    {


    printf("the stack is empty");
    }
    else
        printf("the entered elements are\n");
    for(i=top;i>=0;i--){
        printf("%d |",stack[i]);
    }

}
