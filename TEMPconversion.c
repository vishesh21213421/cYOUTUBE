#include <stdio.h>

int main(){
    // TEMPARATURE CONVERSION PROGRAM
    char choice='\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;
    
    printf("TEMPERATURE CONVERSION PROGRAM \n");
    printf(" C. CELSIUS TO FAHRENHEIT (c) \n");
    printf(" F. FAHRENHEIT TO CELSIUS (f) \n");
    printf("Is the temp in CELSIUS (c) or FAHRENHEIT(f)?: ");
    scanf("%c", &choice);

    if(choice =='c'){
        // C to F
        printf("enter the temp in celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius*9/5)+32;  // C to F
        printf(" %.1f celsius is equal to  %.1f fahrenheit \n",celsius, fahrenheit);


    }
    else if(choice =='f'){
        // F to C
        printf("enter the temp in fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit-32)*5/9;
        printf("%.1f fahrenheit is equal to  %.1f celsius\n",fahrenheit,celsius);

            
    }
    else{
        printf("INVALID CHOICE! \n");

    }






    return 0;
}