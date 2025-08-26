// USERINPUT

#include <stdio.h>
#include <string.h>

int main(){
    int age =0;
    float gpa=0.0f;
    char grade='\0';
    char name[50]="";

    printf("enter your age:");
    scanf("%d",& age);

    printf("enter your gpa:");
    scanf("%f",& gpa);

    printf("enter your grade:");
    scanf(" %c", & grade);

    getchar(); // name including space
    printf("enter your full name:");     // scanf full name me space ke baad kuch nhi sho karta hai
    fgets(name, sizeof(name),stdin);     // isiliyye hum fgets use krenge jisse full name aaye
    name[strlen(name) -1]='\0';       // fgets stands for "file get string"
                                        // fgets se input lene ke baad newline character bhi aata hai, isliye hum usay remove karte hain
    printf("%s\n", name);  // isiliye hmnne include <string.h> kiya hai                          
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    


    return 0;
}