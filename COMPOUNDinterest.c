#include <stdio.h>
#include <math.h>

int main(){
                         // COMPOUND INTEREST

 double principle =0.0;
 double rate =0.0;
 int years =0;
 int timesCOMPOUNDED =0;
 double total =0.0;
printf(" COMPOUND INTEREST CALCULATOR \n");

printf("enter the principle (P) :");
scanf("%lf",&principle);

printf("entr the interest rate %(r): ");
scanf("%lf", &rate);

rate = rate/100;

printf("enter tha number of years (t): ");
scanf("%d",&years);

printf("enter the number of times compound per year (n): ");
scanf("%d",&timesCOMPOUNDED);

total = principle *pow(1+rate/timesCOMPOUNDED, timesCOMPOUNDED*years);

printf("after %d years, your investment will be worth $%.2lf\n", years,total);





    return 0;
}