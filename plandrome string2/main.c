#include <stdio.h>
#include <string.h>
#include<string.h>
int main()
{

char s[100];
int flag=1;
int i;
scanf("%s",&s);
for(i=0;i<((strlen(s))+2)/2;i++){
if(s[i]!=s[strlen(s)-i-1]){
flag=0;
break;
}
}
if(flag==1)
printf("YES");
else
printf("NO");

return 0;
}
