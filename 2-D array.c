#include<Stdio.h>
float rainfall[2][12];
float avg_year[100];
float avg_month[100];
void rain_fall();
void avg_year_rainfall();
void avg_month_rainfall();
void max_month_rainfall();
void max_year_rainfall();
int max=0,ch,sum=0,i,j,a=0,avg=0;
int main()
{

    while(1)
    {

        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
    case 1:
        rain_fall();
        break;
    case 2:
        avg_year_rainfall();
        break;
    case 3:
        avg_month_rainfall();
        break;
    case 4:
        max_year_rainfall();
    case 5:
        max_month_rainfall();
        break;
    case 6:
        exit(1);
    default:
        printf("u entered wrong key-----------\a try again\n1");
        }
    }
}
void rain_fall()
{


    printf("enter the rainfall of 2 year\n");
    for(i=0;i<2;i++){
        for(j=0;j<12;j++){
            scanf("%f",&rainfall[i][j]);
        }
            }
}
void avg_year_rainfall()
{

            for(i=0;i<2;i++){
                for(j=0;j<12;j++){
                        sum=sum+rainfall[i][j];

                }
                   avg_year[i]=sum/12;

            printf("the average rainfall of %d year is %f\n",i+1,avg_year[i]);
            sum=0;

            }
}
void avg_month_rainfall()
{

               sum=0;
            for(i=0;i<12;i++){
                    for(j=0;j<2;j++){
                    sum=sum+rainfall[j][i];

                }
                sum=sum/2;
                avg_month[i]=sum;
                printf("the average of the %d month is %f\n",i+1,avg_month[i]);
                  sum=0;
            }
}
void max_year_rainfall()
{


            for(i=0;i<2;i++){
                if(max<avg_year[i])
                {

                    max=avg_year[i];
                }
            }
            printf("the highest avg_year rainfall of %d year is %f\n",i+1,max);
}
void max_month_rainfall()
{


            for(i=0;i<12;i++){
                if(max<avg_month[i]){
                    max=avg_month[i];
                }
            }
            printf("the highest avg_month rainfall is %f",max);
}
