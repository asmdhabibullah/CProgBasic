// True/False

// Yes/No

// Int, Float/Double, Char, Boolean

#include <stdio.h>

int main(){

    // While: it's works for a spacific time (). only one part. 1. condition to be True or False
    int whileUseIntInput, startingInt, conInt = 0;

    printf("Enter an integer for Starting: ");
    scanf("%d", &whileUseIntInput);

    printf("Enter an integer for whileUseIntInput: ");
    scanf("%d", &startingInt); // 20

    conInt = startingInt; // Swaping ---> Replace

     while (startingInt < whileUseIntInput) {
        if (startingInt % 2 == 0) {
            printf("%d is even\n", startingInt);
        } else {
            printf("%d is odd\n", startingInt);
        }
        startingInt++;
    }
    

    return 0;
};
    // if(startingInt < whileUseIntInput){

    //     // Clock wise
    //     while(conInt = 0 < whileUseIntInput){

    //         // Body has two parts: 1. Work 2. Incriment/Dicrement(will make the condition is to False)

    //         printf("Current integer is: %d \n", conInt);

    //         ++conInt;
    //     }

    // }else{

    //     // Anti Clock wise
    //     while(conInt = 0 > whileUseIntInput){

    //         printf("Current integer is: %d \n", conInt);

    //         --conInt;
    //     }

    // };