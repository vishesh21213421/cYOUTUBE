#include <stdio.h>
int main(){
    // WEIGHT CONVERTER PROGRAM 

    int choice =0;
    float pounds =0.0f;
    float kilograms = 0.0f;

    printf("weight conversion calculator");
    printf("1. kiolgrams to pounds \n");
    printf("2. pounds to kilograms \n");
    printf("enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice ==1){
        // kilograms to  pounds
        printf("enter weight in kilograms : ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds \n", kilograms, pounds);

    }

else if(choice ==2){
    // pounds to kilograms
    printf("enter weight in pounds :");
    scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms \n", pounds, kilograms);


}


    else{
        printf("INvalid choice!, please enter 1 or 2\n");
    }






    return 0;
}