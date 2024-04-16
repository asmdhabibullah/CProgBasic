#include <stdio.h>

int main(){

    // Controll flows: if...else, for, while, do...while, break, continue

    // IF and Else
    int testInt;

    printf("Enter a intiger data: ");
    scanf("%d", &testInt);

    if(testInt == 80){
        printf("You got (A+) and total marks: %d \n", testInt);
    } else if(testInt == 70){
        printf("You got (A) and total marks: %d \n", testInt);
    } else if(testInt == 60){
        printf("You got (A-) and total marks: %d \n", testInt);
    } else if(testInt == 50){
        printf("You got (B) and total marks: %d \n", testInt);
    } else if(testInt == 40){
        printf("You got (c) and total marks: %d \n", testInt);
    } else if(testInt == 30){
        printf("You are failed :( \n");
    } else{
        printf("You did not took an exam... \n");
    }

    // For

    int testFor, counter;
    printf("Enter a integer number: ");

    scanf("%d", &testFor);

    for(counter = 0; counter < testFor; ++counter){
        // printf("Current counter is: %d \n", counter);

        if(testFor < 5){
            break;
        }
        printf("Current counter is: %d \n", counter);
    };





    return 0;
};