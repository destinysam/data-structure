#include <stdio.h>
#include <stdlib.h>
void shirts_pents();
void electronic_acessories();       //PREPARED BY DESTINYSAM@SAMEER//
void books();
void shoes();
void mobile_phones();
int n,x,m,p;
int ch;
int main()
{
    printf("WELCOME TO FLIPCART SHOPPING\n");
    while(1)
    {
        printf("1.SHIRTS AND PENTS\n2.ELECTRONIC ACOSSORIES\n3.BOOKS\n4.SHOES\n5.MOBILE_PHONES\n6.EXIT POINT\n");
    printf("HEYY DEAR!!!!!!!WHAT U WANT TO BUY PLEASE ENTER THE CHOICE\n");
    scanf("%d",&x);
    switch(x)
    {
case 1 :
     shirts_pents();
    break;
case 2:
    electronic_accessories();
    break;
case 3:
    books();
    break;
case 4:
    shoes();
    break;
case 5:
    mobile_phones();
    break;
case 6:
    exit(1);
default:
    printf("SORRY PLEASE CHOOSE VALID CHOICE\n");
    }
}
getch();
}
void shirts_pents()
{
    printf("1.ADDIDAS SHIRTS AND PENTS\n2.NIKE SHIRTS AND PENTS\n3.PHILLIPANE SHIRTS AND PENTS\n4.DENIM SHIRTS AND PENTS\n5.EXIT POINT\n");
    printf("ENTER THE CHOICE FROM ABOVE BRANDS\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        addidas_shirts_pents();
        break;
    case 2:
        nike_shirts_pents();
        break;
    case 3:
        phillipane_shirts_pents();
        break;
    case 4:
        denim_shirts_pents();
        break;
    case 5:
        exit(1);
    default :
        printf("U ENTERED WRONG CLICK\n");
    }
}
void addidas_shirts_pents()
{
    printf("1.M_30\n2.L_32\n3.XL_36\n4.XXL_40\n5.exit point\n");
    printf("CHOOSE YOUR SIZE\n");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED ADDIDAS SHIRT AND PENTS WITH M-30\n");
            printf("YOUR HAVE TO PAY RS 3000 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 2:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED ADDIDAS SHIRT AND PENTS WITH L-32\n");
            printf("YOUR HAVE TO PAY RS 3100 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 3:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED ADDIDAS SHIRT AND PENTS XL-36\n");
            printf("YOUR HAVE TO PAY RS 3200 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;

    case 4:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED ADDIDAS SHIRT AND PENTS WITH XXL-40\n");
            printf("YOUR HAVE TO PAY RS 3300 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 5:
        exit(1);
    default :
        printf("U ENTERED WRONG CHOICE!!!!!!!!!!!TRY AGAIN\n");

    }
    printf("DO U WANT TO BUY ANY MORE OR U WANT TO LEAVE THE SITE PRESS 6 TO EXIT\n");
}
void nike_shirts_pents()
{
        printf("1.M_30\n2.L_32\n3.XL_36\n4.XXL_40\n5.exit point\n");
printf("ENTER YOUR SIZE\n");
scanf("%d",&m);
switch(m)
{
case 1:
    printf("IF U WANT TO BUY PRESS 1 ELSE PRESS 0\n");
    scanf("%d",&ch);
            if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED NIKE SHIRT AND PENTS XL-36\n");
            printf("YOUR HAVE TO PAY RS 2200 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
         case 2:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED NIKE SHIRT AND PENTS WITH L-32\n");
            printf("YOUR HAVE TO PAY RS 3100 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 3:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED NIKE SHIRT AND PENTS XL-36\n");
            printf("YOUR HAVE TO PAY RS 3200 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 4:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED NIKE SHIRT AND PENTS WITH XXL-40\n");
            printf("YOUR HAVE TO PAY RS 1600 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
      }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 5:
        exit(1);
    default :
        printf("U ENTERED WRONG CHOICE!!!!!!!!!!!TRY AGAIN\n");

    }
    printf("DO U WANT TO BUY ANY MORE OR U WANT TO LEAVE THE SITE PRESS 6 TO EXIT\n");
}
void phillipane_shirts_pents()
{
        printf("1.M_30\n2.L_32\n3.XL_36\n4.XXL_40\n5.exit point\n");
    printf("ENTER YOUR SIZE\n");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
    printf("IF U WANT TO BUY PRESS 1 ELSE PRESS 0\n");
    scanf("%d",&ch);
            if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED PHILLIPANE SHIRT AND PENTS XL-36\n");
            printf("YOUR HAVE TO PAY RS 1600 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
         case 2:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED PHILLIPANE SHIRT AND PENTS WITH L-32\n");
            printf("YOUR HAVE TO PAY RS 1600 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 3:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED PHILLIPANE SHIRT AND PENTS XL-36\n");
            printf("YOUR HAVE TO PAY RS 1600 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 4:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED PHILLIPANE SHIRT AND PENTS WITH XXL-40\n");
            printf("YOUR HAVE TO PAY RS 1600 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
      }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 5:
        exit(1);
    default :
        printf("U ENTERED WRONG CHOICE!!!!!!!!!!!TRY AGAIN\n");

    }
    printf("DO U WANT TO BUY ANY MORE OR U WANT TO LEAVE THE SITE PRESS 6 TO EXIT\n");
}
void denim_shirts_pents()
{
        printf("1.M_30\n2.L_32\n3.XL_36\n4.XXL_40\n5.exit point\n");
    printf("ENTER YOUR SIZE\n");
    scanf("%d",&m);
    switch(m)
    {
case 1:
    printf("IF U WANT TO BUY PRESS 1 ELSE PRESS 0\n");
    scanf("%d",&ch);
            if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED PHILLIPANE SHIRT AND PENTS XL-36\n");
            printf("YOUR HAVE TO PAY RS 2500 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
         case 2:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED PHILLIPANE SHIRT AND PENTS WITH L-32\n");
            printf("YOUR HAVE TO PAY RS 2500 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 3:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED PHILLIPANE SHIRT AND PENTS XL-36\n");
            printf("YOUR HAVE TO PAY RS 2530 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
        }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 4:
        printf("IF U WANT TO BUY PRESS 1 IF NOT PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED DENIM SHIRT AND PENTS WITH XXL-40\n");
            printf("YOUR HAVE TO PAY RS 2500 THANK YOU\n");
            printf("HAVE A NICE DAY TO YOU\n");
      }
        else
            printf("SORRY PLEASE ANOTHER TYM\n");
        break;
    case 5:
        exit(1);
    default :
        printf("U ENTERED WRONG CHOICE!!!!!!!!!!!TRY AGAIN\n");

    }
    printf("DO U WANT TO BUY ANY MORE OR U WANT TO LEAVE THE SITE PRESS 6 TO EXIT\n");
    }
void electronic_accessories()
{
    printf("1.POWERBANKS\n2.SHAVING MACHINES\n3.PENDRIVES\n4.HEADPHONES\N5.EXITPOINT\n");
    printf("CHOOSE FROM ABOVE TOP SELECTIONS\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        powerbanks();
        break;
    case 2:
        shaving_machines();
        break;
    case 3:
        pendrives();
        break;
    case 4:
        headphones();
        break;
    case 5:
        exit(1);
    default :
        printf("SORRY U ENTERED WRONG CHOICE\n");
    }
}
void powerbanks()
{
    printf("1.MI_POWERBANKS\n2.INTEX_POWERBANKS\n3.SAMSUNG_POWERBANKS\n4.EXITPOINT\n");
    printf("CHOOSE THE ABOVE BRANDS\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
            {
                printf("U HAVE SUCCESSFULLY PURCHASED MI_POWERBANK BRAND\n");
                printf("U HAVE TO PAY RS 1000\n");
                printf("THANKS FOR CHOOSING OUR BRAND.......TEAM MI\n");
                return;
            }
                else
                    printf("SORRY PLEASE TRY ANOTHER SOME TYM\n");
                break;
                case 2:
                printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
                if(ch==1)
            {
                printf("U HAVE SUCCESSFULLY PURCHASED INTEX_POWERBANK BRAND\n");
                printf("U HAVE TO PAY RS 900\n");
                printf("THANKS FOR CHOOSING OUR BRAND.......TEAM INTEX\n");
                return;
            }
                else
                    printf("SORRY PLEASE TRY ANOTHER SOME TYM\n");
                break;
                case 3:
                    printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
                if(ch==1)
            {
                printf("U HAVE SUCCESSFULLY PURCHASED SAMSUNG_POWERBANK BRAND\n");
                printf("U HAVE TO PAY RS 1500\n");
                printf("THANKS FOR CHOOSING OUR BRAND.......TEAM SAMSUNG\n");
                return;
            }
                else
                    printf("SORRY PLEASE TRY ANOTHER SOME TYM\n");
                break;
                case 4:
                    exit(1);
                default :
                    printf("SORRY U CHOOSE WRONG KEY\n");
            }
            printf("THANKS FOR CHOOSING FLIPCART\n");
            }
void shaving_machines()
{
    printf("1.PHILIPS\n2.KEMEI\n3.MAXEL_AK\n4.EXITPOINT\n");
    printf("CHOOSE FROM ABOVE BRANDS\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESFULLY PURCHASED PHILIPS SHAVING MACHINE\n ");
            printf("YOUR PAYMENT IS @1100\n");
            printf("THANKS!!!!!!!!!!!!\n");
            return;
        }
            else
                printf("SORRY TRY ANOTHER TYM\n");
    break;
    case 2:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESFULLY PURCHASED KEMEI SHAVING MACHINE\n ");
            printf("YOUR PAYMENT IS @1400\n");
            printf("THANKS!!!!!!!!!!!!\n");
            return;
        }
            else
                printf("SORRY TRY ANOTHER TYM\n");
                break;
    case 3:
        printf("PRESS 1 TO BUY ELSE PRESS 0\N");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESFULLY PURCHASED MAXEL_AK SHAVING MACHINE\n ");
            printf("YOUR PAYMENT IS @1800\n");
            printf("THANKS!!!!!!!!!!!!\n");
            return;
        }
            else
                printf("SORRY TRY ANOTHER TYM\n");
                break;
    case 4:
        exit(1);
    default :
        printf("SORRY U ENTERED WRONG KEY\a!!!!!PLEASE TRY ANOTHER TYM\n");
    }
    printf("THANKS FOR CHOOSING FLIPCART\n");
}
void pendrives()
{
    printf("1.HP_16GB\n2.SONY_16GB\n3.SANDISK_16GB\n4.EXITPOINT\n");
    printf("CHOOSE FROM ABOVE BRANDS\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED HP PENDRIVE WITH 16GB STORAGE\n");
            printf("YOUR PAYMENT IS 650\n");
            printf("THANKS FOR CHOOSE OUR BRAND......TEAM HP\n");
            return;
        }
            else
                printf("PLEASE TRY ANOTHER TYM\n");
                break;
    case 2:
        printf("PRESS 1 TO BUY ELSE 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED SONY PENDRIVE WITH 16GB STORAGE\n");
            printf("YOUR PAYMENT IS 900\n");
            printf("THANKS FOR CHOOSE OUR BRAND......TEAM SONY\n");
            return;
        }
            else
        printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 3:
        printf("PRESS 1 TO BUY ELSE 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED SANDISK PENDRIVE WITH 8GB STORAGE\n");
            printf("YOUR PAYMENT IS 400\n");
            printf("THANKS FOR CHOOSE OUR BRAND......TEAM SANDISK\n");
            return;
        }
            else
        printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 4:
        exit(1);
    default :
        printf("U ENTERED WRONG KEY\n");
}
        printf("THANKS FOR CHOOSING FLIPCART\n");
}
void headphones()
{
    printf("1.JBL\n2.SONY\n3.ZEBRONICS\n4.EXITPOINT\n");
    printf("ENTER YOUR CHOICE WHICH BRAND YOU ARE LOOKING FOR\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED JBL HEADPHONE\n");
            printf("YOUR PAYMENT IS RS 3000\n");
            printf("THANKS FOR CHOOSING OUR...\n");
            return ;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 2:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED SONY HEADPHONE\n");
            printf("YOUR PAYMENT IS RS 4000\n");
            printf("THANKS FOR CHOOSING OUR...\n");
            return ;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 3:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED ZEBRONICS HEADPHONE\n");
            printf("YOUR PAYMENT IS RS 1500\n");
            printf("THANKS FOR CHOOSING OUR...\n");
            return ;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 4:
        exit(1);
    default :
        printf("SORRY U ENTERED WRONG KEY\n");
    }
    printf("THANKS FOR CHOOSING FLIPCART\n");
}
void books()
{
    printf("1.GK_BOOKS\n2.NOVEL_BOOKS\n3.MATHMATICS_BOOKS\n4.SCIENCE_BOOKS\n5.EXITPOINT\n");
    printf("CHOOSE FROM ABOVE CHOICES\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        gk_books();
        break;
    case 2:
        novel_books();
        break;
    case 3:
        mathmatics_books();
        break;
    case 4:
        science_books();
        break;
    case 5:
        exit(1);
    default :
        printf("U ENTERED WRONG CHOICE\n");
    }
}
void gk_books()
{
    printf("1.LOW_LEVEL_GK\n2.STANDARD_GK\n3.HIGH_LEVEL_GK\n4.EXITPOINT\n");
    printf("CHOOSE FROM ABOVE BOOKS\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED GK\n");
            printf("YOUR PAYMENT IS 200\n");
            printf("THANKS FOR PURCHASING\n");
            return ;
        }
            else
                printf("SORRY PLEASE TRY ANOTHER TYM\n");
            break;
case 2:
     printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED GK\n");
            printf("YOUR PAYMENT IS 300\n");
            printf("THANKS FOR PURCHASING\n");
            return ;
        }
            else
                printf("SORRY PLEASE TRY ANOTHER TYM\n");
            break;
case 3:
     printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED GK\n");
            printf("YOUR PAYMENT IS 200\n");
            printf("THANKS FOR PURCHASING\n");
            return ;
        }
            else
                printf("SORRY PLEASE TRY ANOTHER TYM\n");
            break;
case 4:
    exit(1);
default :
    printf("U ENTERED WRONG KEY\n");
}
printf("THANKS FOR CHOOSING FLIPCART\n");
}
void mathmatics_books()
{
    printf("1.ALLINBOOK_MATHMATICS\n2.NCERT_MATHMATICS\n3.FOUNDATION_MATHMATICS\n4.EXITPOINT\n");
    printf("CHOOSE FROM ABOVE BOOKS\n");
scanf("%d",&p);
switch(p)
{
case 1:
    printf("PRESS 1 TO CONTINUE ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("U HAVE SUCCESSFULLY PURCHASED ALLINBOOK\n");
        printf("U HAVE TO PAY RS 400\n");
        printf("THANKS FOR CHOOSING ARIHANT\n");
        return;
    }
    else
        printf("SORRY PLEASE TRY AGAIN\n");
    break;
case 2:
    printf("PRESS 1 TO CONTINUE ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("U HAVE SUCCESSFULLY PURCHASED NCERT_MATHMATICS\n");
        printf("U HAVE TO PAY RS 450\n");
        printf("THANKS FOR CHOOSING ARIHANT\n");
        return;
    }
    else
        printf("SORRY PLEASE TRY AGAIN\n");
    break;
case 3:
    printf("PRESS 1 TO CONTINUE ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("U HAVE SUCCESSFULLY PURCHASED FOUNDATION MATHMATICS\n");
        printf("YOU HAVE TO PAY RS 600\n");
        printf("THANKS FOR CHOOSING NCERT\n");
        return;
    }
    else
        printf("SORRY PLEASE TRY AGAIN\n");
    break;
case 4:
    exit(1);
default :
    printf("U ENTERED WRONG CHOICE\n");
}
printf("THANKS FOR CHOOSING FLIPCART\n");
}
void science_books()
{
    printf("1.PHYSICS\n2.CHEMISTRY\n3.BIOLOGY\n4.EXITPOINT\n");
    printf("ENTER THE CHOICE FROM ABOVE BOOKS\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED GENERAL PHYSICS\n");
            printf("YOUR PAYMENT IS 1100\n");
            printf("THANKS FOR CHOOSING OUR PRODUCT\n");
            return;
        }
        else
            printf("SORRY PLEASE TRY AGAIN\n");
    case 2:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED GENERAL CHEMISTRY\n");
            printf("YOUR PAYMENT IS 1200\n");
            printf("THANKS FOR CHOOSING OUR PRODUCT\n");
            return;
        }
        else
            printf("SORRY PLEASE TRY AGAIN\n");
    case 3:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED GENERAL BIOLOGY\n");
            printf("YOUR PAYMENT IS 1300\n");
            printf("THANKS FOR CHOOSING OUR PRODUCT\n");
            return;
        }
        else
            printf("SORRY PLEASE TRY AGAIN\n");
    case 4:
        exit(1);
    default :
        printf("SORRY U ENTERED WRONG KEY\n");
    }
    printf("THANKS FOR CHOOSING FLIPCART\n");
}
void novel_books()
{
    printf("1.ROMANTIC_NOVELS\n2.STORY_NOVELS\n3.DRAMATIC_NOVELS\n4.EXITPOINT\n");
    printf("CHOOSE FROM ABOVE NOVELS\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED ROMANTIC NOVEL\n");
            printf("U HAVE TO PAY 450\n");
            printf("THANKS FOR IMPROVING US....\n");
            return ;
        }
        else
            printf("SORRY PLEASE TRY ANOTHER SOME TYM\n");
            break;
    case 2:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED STORY NOVEL\n");
            printf("U HAVE TO PAY 400\n");
            printf("THANKS FOR IMPROVING US....\n");
            return ;
        }
        else
            printf("SORRY PLEASE TRY ANOTHER SOME TYM\n");
            break;
    case 3:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED DRAMATIC NOVEL\n");
            printf("U HAVE TO PAY 300\n");
            printf("THANKS FOR IMPROVING US....\n");
            return ;
        }
        else
            printf("SORRY PLEASE TRY ANOTHER SOME TYM\n");
            break;
    case 4:
        exit(1);
    default :
        printf("SORRY U ENTERED INVALD KEY\n");
    }
    printf("THANKS FOR CHOOSING FLIPCART\n");
}
void shoes()
{
    printf("1.ADDIDAS\n2.NIKE\n3.WOODLAND\n4.EXITPOINT\n");
    printf("CHOOSE FROM ABOVE BRANDS\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        addidas_shoes();
        break;
    case 2:
        nike_shoes();
        break;
    case 3:
        woodland_shoes();
        break;
    case 4:
        exit(1);
    default :
        printf("SORRY U ENTERED WRONG CHOICE\n");
    }
    printf("THANKS FOR CHOOSING FLIPCART\n");
}
void addidas_shoes()
{
    printf("1.SIZE_6\n2.SIZE_7\n3.SIZE_8\n4.EXITPOINT\n");
    printf("CHOOSE FROM THE ABOVE SIZES\n ");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED ADDIDAS SHOES WITH SIZE 6\n");
            printf("U HAVE TO PAY 2500\n");
            printf("THANKS FOR CHOOSING ADDIDAS\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 2:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED ADDIDAS SHOES WITH SIZE 7\n");
            printf("U HAVE TO PAY 2500\n");
            printf("THANKS FOR CHOOSING ADDIDAS\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 3:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED ADDIDAS SHOES WITH SIZE 8\n");
            printf("U HAVE TO PAY 2500\n");
            printf("THANKS FOR CHOOSING ADDIDAS\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 4:
        exit(1);
    default :
        printf("U ENTERED INVALID KEY\n");
    }
    printf("THANKS FOR CHOOSING FLIPCART\n");
}
void nike_shoes()
{
    printf("1.SIZE_6\n2.SIZE_7\n3.SIZE_8\n4.EXITPOINT\n");
    printf("CHOOSE FROM THE ABOVE SIZES\n ");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED NIKE SHOES WITH SIZE 6\n");
            printf("U HAVE TO PAY 2900\n");
            printf("THANKS FOR CHOOSING NIKE\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 2:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED NIKE SHOES WITH SIZE 7\n");
            printf("U HAVE TO PAY 2900\n");
            printf("THANKS FOR CHOOSING NIKE\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 3:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED NIKE SHOES WITH SIZE 8\n");
            printf("U HAVE TO PAY 2900\n");
            printf("THANKS FOR CHOOSING NIKE\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 4:
        exit(1);
    default :
        printf("U ENTERED INVALID KEY\n");
    }
    printf("THANKS FOR CHOOSING FLIPCART\n");
}
void woodland_shoes()
{
    printf("1.SIZE_6\n2.SIZE_7\n3.SIZE_8\n4.EXITPOINT\n");
    printf("CHOOSE FROM THE ABOVE SIZES\n ");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED WOODLAND SHOES WITH SIZE 6\n");
            printf("U HAVE TO PAY 3500\n");
            printf("THANKS FOR CHOOSING WOODLAND\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 2:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED WOODLAND SHOES WITH SIZE 7\n");
            printf("U HAVE TO PAY 3500\n");
            printf("THANKS FOR CHOOSING WOODLAND\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 3:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED WOODLAND SHOES WITH SIZE 8\n");
            printf("U HAVE TO PAY 3500\n");
            printf("THANKS FOR CHOOSING WOODLAND\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
    case 4:
        exit(1);
    default :
        printf("U ENTERED INVALID KEY\n");
    }
    printf("THANKS FOR CHOOSING FLIPCART\n");
}
void mobile_phones()
{
    printf("1.MI_REDMI\n2.REALME\n3.SAMSUNG\n4.ASUS\n5.EXITPOINT\n");
    printf("PLEASE LOOK TO ABOVE BRANDS AND CHOOSE\N");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        redmi_phones();
        break;
    case 2:
        realme_phones();
        break;
    case 3:
        samsung_phones();
        break;
    case 4:
        asus_phones();
        break;
    case 5:
        exit(1);
    default :
        printf("U ENTERED WRONG KEY\n");
    }
}
void redmi_phones()
{
    printf("1.REDMI_y2\n2.REDMI_6A\n3.REDMI_NOTE5PRO\n4.REDMI_NOTE6PRO\n5.EXITPOINT\n");
    printf("CHOOSE FROM ABOVE SERIES\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED REDMI Y2\n");
            printf("U HAVE TO PAY RS10000\n");
            printf("THANKS FOR CHOOSEING.......TEAM MI\n");
            return;
        }
        else
            printf("PLEASE ANOTHER TYM\n");
        break;
    case 2:
                printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED REDMI 6A\n");
            printf("U HAVE TO PAY RS 6000\n");
            printf("THANKS FOR CHOOSEING.......TEAM MI\n");
            return;
        }
        else
            printf("PLEASE ANOTHER TYM\n");
            break;
    case 3:
                printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED REDMI NOTE5PRO\n");
            printf("U HAVE TO PAY RS11000\n");
            printf("THANKS FOR CHOOSEING.......TEAM MI\n");
            return;
        }
        else
            printf("PLEASE ANOTHER TYM\n");
            break;
    case 4:
                printf("PRESS 1 TO BUY ELSE PRESS 0\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("U HAVE SUCCESSFULLY PURCHASED REDMI NOTE6PRO\n");
            printf("U HAVE TO PAY RS12000\n");
            printf("THANKS FOR CHOOSEING.......TEAM MI\n");
            return;
        }
        else
            printf("PLEASE ANOTHER TYM\n");
    case 5:
        exit(1);
    default :
        printf("U ENTERED WRONG CHOICE\n");
    }
    printf("THANKS FOR CHOOSING FLIPCART\n");
}
void realme_phones()
{
    printf("1.REALME\n2.REALME_2PRO\n3.REALME3\n4.EXITPOINT\n");
    printf("CHOOSE FROM ABOVE BRANDS\n");
    scanf("%d",&p);
    switch(p)
    {
case 1:
    printf("PRESS 1 TO BUY ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("U HAVE SUCCEFULLY PURCHASED REALME\n");
            printf("U HAVE TO PAY RS 9999\n");
            printf("THANKS FOR CHOOSING OUR BRAND....TEAM OPPO\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
case 2:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("U HAVE SUCCEFULLY PURCHASED REALME 2PRO\n");
            printf("U HAVE TO PAY RS 14000\n");
            printf("THANKS FOR CHOOSING OUR BRAND....TEAM OPPO\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
case 3:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("U HAVE SUCCEFULLY PURCHASED REALME3\n");
            printf("U HAVE TO PAY RS 11000\n");
            printf("THANKS FOR CHOOSING OUR BRAND....TEAM OPPO\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
case 4:
    exit(1);
default :
    printf("U ENTERED WRONG KEY\n");
        }
        printf("THANKS FOR CHOOSING FLIPCART\n");
}
void samsung_phones()
{
    printf("1.SAMSUNGM_20\n2.SAMSUNG30\N3.SAMSUNGJ6+\n4.EXITPOINT\n");
  printf("CHOOSE FROM ABOVE BRANDS\n");
    scanf("%d",&p);
    switch(p)
    {
case 1:
    printf("PRESS 1 TO BUY ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("U HAVE SUCCEFULLY PURCHASED SAMSUNGM_20\n");
            printf("U HAVE TO PAY RS 13000\n");
            printf("THANKS FOR CHOOSING OUR BRAND....TEAM SAMSUNG\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
case 2:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("U HAVE SUCCEFULLY PURCHASED SAMSUNGM_30\n");
            printf("U HAVE TO PAY RS 14000\n");
            printf("THANKS FOR CHOOSING OUR BRAND....TEAM SAMSUNG\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
case 3:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("U HAVE SUCCEFULLY PURCHASED SAMSUNG J6+\n");
            printf("U HAVE TO PAY RS 38000\n");
            printf("THANKS FOR CHOOSING OUR BRAND....TEAM SAMSUNG\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
case 4:
    exit(1);
default :
    printf("U ENTERED WRONG KEY\n");
        }
        printf("THANKS FOR CHOOSING FLIPCART\n");
}
void asus_phones()
{
    printf("1.ASUS_ZENPHONE\n2.ASUS_ASUS_ZENPHONEMAX\n3.ASUS_ZENPHONEMAX2\n4.exitpoint\n");
printf("CHOOSE FROM ABOVE BRANDS\n");
    scanf("%d",&p);
    switch(p)
    {
case 1:
    printf("PRESS 1 TO BUY ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("U HAVE SUCCEFULLY PURCHASED ASUS ZENPHONE\n");
            printf("U HAVE TO PAY RS 10000\n");
            printf("THANKS FOR CHOOSING OUR BRAND....TEAM ASUS\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
case 2:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("U HAVE SUCCEFULLY PURCHASED ASUS ZENPHONEMAX\n");
            printf("U HAVE TO PAY RS 14000\n");
            printf("THANKS FOR CHOOSING OUR BRAND....TEAM ZENPHONE\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
case 3:
        printf("PRESS 1 TO BUY ELSE PRESS 0\n");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("U HAVE SUCCEFULLY PURCHASED ASUS ZENPHONE MAX2\n");
            printf("U HAVE TO PAY RS 14000\n");
            printf("THANKS FOR CHOOSING OUR BRAND....TEAM ZENPHONE\n");
            return;
        }
        else
            printf("PLEASE TRY ANOTHER TYM\n");
        break;
case 4:
    exit(1);
default :
    printf("U ENTERED WRONG KEY\n");
        }
        printf("THANKS FOR CHOOSING FLIPCART\n");
}
