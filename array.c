#include<stdio.h>
int main()
{
    int arr[100],ar[100],i,n,j;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter the number of elements \n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i=n-1,j=0;i>=0;i--,j++){
        ar[j]=arr[i];
    }
        for(i=0;i<n;i++){
        arr[i]=ar[i];
        }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;

}
