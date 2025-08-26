#include <stdio.h>

int main(){
    // SWITCH = An alternative to many if-else statements
    //          more effiecient with fixed integers values

    char dayofweek='\0';

    printf("enter a day of the week (m,t,w,r,f,s,u): ");
    scanf("%c", &dayofweek);

    switch(dayofweek){
    case 'm':
        printf("it is Monday\n");
        break;
    case 't':
        printf("it is Tuesday\n");
        break;
    case 'w':
        printf("it is Wedenesday\n");
        break;
    case 'r':
        printf("it is Thursday\n");
        break;
    case 'f':
        printf("it is Friday\n");
        break;
    case 'u':
        printf("it is Saturday\n");
        break;
    case 7:
        printf("it is Sunday\n");
        break;
        default:
        printf("Please only enter a character (m,t,w,r,f,s,u)\n");
    }





    return 0;
}