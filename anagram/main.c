#include <stdio.h>
#include<string.h>
int main()
{
int t;
printf("enter the test cases\n");
scanf("%d",&t);
for(int i=0;i<t;i++){
int count=0;
char a[10000],b[10000];
scanf("%s",a);
scanf("%s",b);
int s1 = strlen(a),s2 = strlen(b);
for(int i=0;i<s1;i++){
for(int j=0;j<s2;j++){
if(a[i]==b[j]){
count++;
b[j]='0';
break;
}
}
}
printf("%d\n",s1 + s2 - (2*count));
}
return 0;
}
