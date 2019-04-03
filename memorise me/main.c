#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,t,arr[n],i,j;
    printf("enter the n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number of quieres u want\n");
    scanf("%d",&t);
    j=0;
    while(j<t)
    {
        int s,count=0;
        printf("enter the number u want to find\n");
        scanf("%d",&s);
        for(i=0;i<n;i++)
        {
            if(arr[i]==s)
            {

                count++;
            }
        }
        if(count==0)
        {
            printf("NUMBER NOT FOUND\n");
        }
        else
        printf("%d",count);
j++;
    }
    return 0;
}
