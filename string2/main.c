#include <stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char string1[1000],string2[1000];
    printf("enter the test cases\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",string1);
        scanf("%s",string2);
    }

    return 0;
}
