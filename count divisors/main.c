#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,k,a;
  int count=0;
  printf("ENTER The THREE NOS\n");
  scanf("%d",&i);
  scanf("%d",&j);
  scanf("%d",&k);
  for(a=i;a<=j;a++)
  {
      if(a%k==0)
      {
          count++;
      }
  }
  printf("%d",count);
    return 0;
}
