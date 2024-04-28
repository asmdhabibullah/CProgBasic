#include <stdio.h>

int main(){

    // For is a loop: and it has three parts of condition to fullfillment something.
    // 1. Starting condition
    // 2. Comparison condition: Same = [(True==Yes or False==No) (Yes==True or No==False)]
    // 3. Incriment/Dicrement condition

    int forInt, startingInt, conInt;

    printf("Enter an integer for For: ");
    scanf("%d", &forInt);

    printf("Enter an integer for Condition: ");
    scanf("%d", &startingInt); // 20

    conInt = startingInt; // Swaping ---> Replace

    if(startingInt < forInt){

        // Clock wise
        for(conInt=0; startingInt < forInt; startingInt++){
            printf("Current integer is: %d \n", startingInt);
        };

    }else{

        // Anti Clock wise
        for(conInt = 0; startingInt > forInt; startingInt--){
            printf("Current integer is: %d \n", startingInt);
        };

    };

    return 0;
};