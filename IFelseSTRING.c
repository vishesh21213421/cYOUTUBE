#include <stdio.h>
#include <string.h>

int main(){
  char name[50]="";
    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0'; // to remove the newline character
    

    if(strlen(name) ==0) {
        printf("you did not enter your name\n");
    }
    else {
        printf("hello %s", name);
    }


    return 0;
}