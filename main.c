
#include <stdio.h>
#include <stdlib.h>
int a,b,c,d,tot1,tot2,tot3,total1=0,total=0,count1=0,count2=0,count3=0;
void menu()
{   printf(" \n:::::::::MENU:::::::::\n 1.SAMOSA   30/-\n 2.DOSA     20/-\n 3.TEA      10/- \n 0.EXIT   \nENTER CHOICE:");
    scanf("%d",&a);
}
void order()
{int i=1;
printf("\t\t\t::::::::WElCOME TO HOTEL TAJ::::::::");
    while(i)
    {
    menu();
    switch(a)
{   case 1:
    printf("HOW MANY PLATES:");
    scanf("%d",&b);
    //tot1=(b*30);
    tot1=tot1+(b*30);
    count1=b+count1;
    printf("OK NICE CHOICE....\n");
    printf("ANYTHING YOU WANT....?\n");
    break;
    case 2:
    printf("HOW MANY PLATES:");
    scanf("%d",&c);
   // tot2=(20*c);
    tot2=tot2+(20*c);
    count2=c+count2;
    printf(" OK NICE CHOICE....\n");
    printf("ANYTHING YOU WANT....?\n");
    break;
    case 3:
    printf("HOW MANY CUPS:");
    scanf("%d",&d);
    //tot3=(10*d);
    tot3=tot3+(10*d);
    count3=d+count3;
    printf("OK NICE CHOICE....\n");
    printf("ANYTHING YOU WANT....?\n");
    break;
    case 0:
    i=0;
    break;
    default:
    printf("Sorry Unavailable...\n");
    break;
}
     }
}
 void bill()
 {
     int amt,ret_cash;
   printf("\n:::FOOD\t\t    QUANTITY\t\tPRICE\t\tTOTAL:::\n\n");
   if(tot1!=0)
    {
    printf("   SAMOSA \t\t%d\t\t%d\t\t%d\n",count1,30,tot1);
    }
   if(tot2!=0)
   {
     printf("   DOSA   \t\t%d\t\t%d\t\t%d\n",count2,20,tot2);
   }
    if(tot3!=0)
   {
     printf("   TEA    \t\t%d\t\t%d\t\t%d\n",count3,10,tot3);
   }


     printf("\nYOUR BILL IS = Rs.%d \n",tot1+tot2+tot3);

     printf("\nRECEIVED CASH = ");
     scanf("%d",&ret_cash);

     amt=ret_cash-(tot1+tot2+tot3);
     printf("\nRETURN CASH = Rs.%d\n\n",amt);

    printf("NOTES TO BE RETURNED TO THE CUSTOMER:\n");
total=amt/2000;
if(total!=0)
{printf("\n%d Note(s) of 2000.00\n",total);}

amt=amt-(total*2000);

total=amt/500;
if(total!=0)
{printf("\n%d Note(s) of 500.00\n",total);}
amt=amt-(total*500);

total=amt/200;
if(total!=0)
{printf("\n%d Note(s) of 200.00\n",total);}

amt=amt-(total*200);

total=amt/100;
if(total!=0)
{printf("\n%d Note(s) of 100.00\n",total);}
amt=amt-(total*100);

total=amt/50;
if(total!=0)
{printf("\n%d Note(s) of 50.00\n",total);}
amt=amt-(total*50);

total=amt/20;
if(total!=0)
{printf("\n%d Note(s) of 20.00\n",total);}
amt=amt-(total*20);

total=amt/10;
if(total!=0)
{printf("\n%d Note(s) of 10.00\n",total);}
amt=amt-(total*10);

total=amt/5;
if(total!=0)
{printf("\n%d Note(s) of 5.00\n",total);}
amt=amt-(total*5);

total=amt/2;
if(total!=0)
{printf("\n%d Note(s) of 2.00\n",total);}
amt=amt-(total*2);

total=amt/1;
if(total!=0)
{printf("\n%d Note(s) of 1.00\n",total);}
amt=amt-(total*1);
 }


int main()
{
   order();
   bill();
    printf("\n ***************** THANKYOU ********************");
    printf("\n***************** VISIT AGAIN :-)**************\n\n");
return 0;
}
