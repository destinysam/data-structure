#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,*q;
    p=(int *)1000;
    q=(int *)2000;
    printf("%d",(q-p));
    return 0;
}
