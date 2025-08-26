#include <stdio.h>
int main (){

    // if statement = do some code if a condition if true.
    //                 if the condition is false, don't do it.


    int age = 0;
    printf("enter your age: ");
    scanf("%d", &age);


    if(age >= 65){
        printf("you are a senior!\n");
    }
    else if(age >= 18){
        printf("you are an adult!\n");
    }
    else if(age <0){
        printf("you haven't been born yet!\n");
    }
    else if(age ==0){
        printf("you are a newborn!\n");
    }
    else if(age >= 65){
        printf("you are a senior!\n");
    }
    else{
        printf("you are a child!\n");
    }


    return 0;
}