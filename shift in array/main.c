#include <stdio.h>
#include <stdlib.h>        // prepared by @DESTINY SAM//
 int main()
{
    int n,arr[1000],i,x,pos;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position where u want to insert\n");
    scanf("%d",&pos);
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    printf("enter the number u want to insert\n");
    scanf("%d",&x);
    arr[pos]=x;
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
