#include<Stdio.h>
#include<string.h>
int sumup(int a,int b){
int c;
c=a+b;
return(c);
}
int main()
{
int num1,num2,sum=0;
printf("enter the two nos ");
scanf("%d %d",&num1,&num2);
sum=sumup(num1,num2);
printf("%d",sum);
return 0;
}
