#include <stdio.h>
int main(){

    //format specifier = special tokens that begin with a % symbol,
    //                   followed by a character that specifies the data type
    //                    and optional modifiers (width, precision,flags).
    //                   they control how data is displayed or interpreted.






  /* int age =25;
   float price=19.99;
   double pi=3.141592653589793;
   char currency ='$';
   char name[]= "bro code";

   printf("%d",age);
   printf("\n%f", price);
   printf("\n%lf",pi);
   printf("\n%c",currency);
   printf("\n%s\n",name);

*/






// width = just take 3 spaces when put in between % and d 

/*int num1=1;
int num2=10;
int num3=100;

printf("%3d\n",num1);
printf("%3d\n",num2);
printf("%3d\n",num3);

*/







/*int num1=1;
int num2=10;
int num3=100;

printf("%-4d\n",num1);
printf("%-4d\n",num2);
printf("%-4d\n",num3);

*/







// precison




/*
int num1=1;
int num2=10;
int num3=-100;

printf("%+4d\n",num1);
printf("%+4d\n",num2);
printf("%+4d\n",num3);
*/




float price1=19.99;
float price2=1.50;
float price3=-100.00;

printf("%+7.2f\n",price1);
printf("%+7.2f\n",price2);
printf("%+7.2f\n",price3); // 7 is the space width and .2 is the precision, which means 2 digits after the decimal point





    return 0;
}
