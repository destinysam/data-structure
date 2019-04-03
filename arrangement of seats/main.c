#include<stdio.h>
int main()
{
int i,seat_no,facing_seat,p,no;
scanf("%d",&no);
for(i=0;i<no;i++){
scanf("%d",&seat_no);
p=seat_no%12;
if(p==1)
facing_seat=seat_no+11;
else if(p==2)
facing_seat=seat_no+9;
else if(p==3)
facing_seat=seat_no+7;
else if(p==4)
facing_seat=seat_no+5;
else if(p==5)
facing_seat=seat_no+3;
else if(p==6)
facing_seat=seat_no+1;
else if(p==7)
facing_seat=seat_no-1;
else if(p==8)
facing_seat=seat_no-3;
else if(p==9)
facing_seat=seat_no-5;
else if(p==10)
facing_seat=seat_no-7;
else if(p==11)
facing_seat=seat_no-9;
else if(p==0)
facing_seat=seat_no-11;
printf("%d ",facing_seat);
if(seat_no%6==0 ||seat_no%6==1){
printf("WS\n");
}
else if(seat_no%6==2 ||seat_no%6==5){
printf("MS\n");
}
else if(seat_no%6==3 ||seat_no%6==4){
printf("AS\n");
}
}

return 0;
}
