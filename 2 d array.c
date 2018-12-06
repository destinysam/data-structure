//NAME:SAMEER AHMAD RATHER
//ROLLNO:18600007
//SUBJECT:DATA STRUCTURE
//ASSIGNMENT:PROGRAM TO FIND AVG_RAINFALL AND HIGHEST RAINFALL
#include<Stdio.h>
#define year  2
#define month 6
int rainfall[year][month];
float avg_year[year];
float avg_month[month];
void menu();
void data();
void display();
void avg_year_rainfall();
void avg_month_rainfall();
void max_year_rainfall();
void max_month_rainfall();
float max=0;
int sum=0,i,j,a=0,avg=0;
int main()
{
          int ch;
        data();
    while(1)
    {
        system("cls");
            menu();
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            display();

        break;
    case 2:
        avg_year_rainfall();
        break;
    case 3:
        avg_month_rainfall();
        break;
    case 4:
        max_year_rainfall();
        break;
    case 5:
        max_month_rainfall();
        break;
    case 6:
        exit(0);
    default:
        printf("u entered wrong key-----------\a try again\n");
        }
        getch();
    }
}
void menu()
{
    printf("\n1. Display Rainfall Array");
    printf("\n2.  avg_year_rainfall");
    printf("\n3. average_month_rainfall");
    printf("\n4. max_year_rainfall");
    printf("\n5. max_month_rainfall");
    printf("\n6. Exit");
    printf("\n\n\n\n*******************************************************");
}
void display()
{
    printf("\tRainfall Array\n\n");
   for(i=0;i<year;i++)
   {
       for(j=0;j<month;j++)
        {
        printf("%d\t",rainfall[i][j]);
        }
    printf("\n");

   }

}


void avg_year_rainfall()
{

            for(i=0;i<year;i++){
                for(j=0;j<month;j++){
                        sum=sum+rainfall[i][j];

                } sum=sum/month;
                   avg_year[i]=sum;

            printf("the average rainfall of %d year is %f\n",i+1,avg_year[i]);
            sum=0;

            }
}
void avg_month_rainfall()
{


            for(i=0;i<month;i++){
                    for(j=0;j<year;j++){
                    sum=sum+rainfall[j][i];

                }
                sum=sum/year;
                avg_month[i]=sum;
                printf("the average of the %d month is %f\n",i+1,avg_month[i]);
                  sum=0;
            }
}
void data()
{
    printf("enter data\n");
    for(i=0;i<year;i++){
        for(j=0;j<month;j++){
            scanf("%d",&rainfall[i][j]);
        }
    }
}
void max_year_rainfall()
{
      max=avg_year[0];
    for(i=1;i<year;i++){
        if(max<avg_year[i])
                {

                    max=avg_year[i];
                }
            }
    printf("the highest avg_year rainfall of %d year is %f\n",max);
}
void max_month_rainfall()
{

             max=avg_month[0];
            for(i=1;i<month;i++){
                if(max<avg_month[i]){
                    max=avg_month[i];
                }
            }
            printf("the highest avg_month rainfall is %f",max);
}
