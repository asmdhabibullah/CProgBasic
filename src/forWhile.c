#include <stdio.h>
#include <string.h>

int main(){

    // I want an input from user for to run (for and while) loop
    const char **inpForWhile;

    printf("Pleanse inpur a charecter: "); // f or w

    scanf("%s", &inpForWhile);


    if(strcmp(*inpForWhile[0], "f") == 0){
    // if(inpForWhile[0] == "f"){
        
        int forUserInput;

        printf("Please input an intiger: ");

        scanf("%d", &forUserInput);

        // For is a loop: and it has three parts of condition to fullfillment something.
        // 1. Starting condition
        // 2. Comparison condition: Same = [(True==Yes or False==No) (Yes==True or No==False)]
        // 3. Incriment/Dicrement condition (Starting condition)

        int startFor;

        if(forUserInput < 0){
            printf("Your input is too small. Please input a real number which is > 0 \n");
        }else{
            for(startFor = 0; startFor < forUserInput; startFor++){
                printf("Current loop number: %d \n", startFor);
            }
        }

    }else{

    }

    printf("%s", inpForWhile);


    return 0;
};


// int main(){
    
//     int forWhileUseInput;

//     printf("Please input an intiger: ");

//     scanf("%d", &forWhileUseInput);

//     // For is a loop: and it has three parts of condition to fullfillment something.
//     // 1. Starting condition
//     // 2. Comparison condition: Same = [(True==Yes or False==No) (Yes==True or No==False)]
//     // 3. Incriment/Dicrement condition (Starting condition)

//     int startFor;

//     if(forWhileUseInput < 0){
//         printf("Your input is too small. Please input a real number which is > 0 \n");
//     }else{
//         for(startFor = 0; startFor < forWhileUseInput; startFor++){
//             printf("Current loop number: %d \n", startFor);
//         }
//     }

//     return 0;
// };