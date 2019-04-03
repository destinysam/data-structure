#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int arr[n];
    int i,mul=1;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the product of array is \n");
    for(i=0;i<5;i++)
    {
        mul=mul*arr[i];
    }
    printf("%d",mul);
    return 0;
}
