#include<stdio.h>
int sumup(int a,int  b);
int main()
{

    int num1,num2,sum=0;
    printf("enter the value of two nos");
    scanf("%d %d",&num1,&num2);
    sum=sumup(num1,num2);
    printf("%d",sum);
    return 0;
}
int sumup(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}
