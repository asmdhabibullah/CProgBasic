#include <stdio.h>

/*
    Function types
    1. Standert Library Func
    2. User define Func
*/

/*
    Scope
    1. Global scope.
    2. Local scope.
*/

/*
    Memory swap/replacement
*/

/*
    Complexity: Two types
    1. Time: How long
    2. Space: How much
*/

/*
    String can be write into two ways
    1. ''
    2. ""

    " '' " or ' "" '
*/

/*
    Code execution stack/lable
*/

int main(){

    char operators;

    printf("Enter an operator (+, -, *, /): ");

    scanf("%s", &operators);

    // double num1;
    // double num2;
    // double result;

    double num1, num2, result; // Totally diffrent memory each of them.

    printf("Enter two numbers: ");

    scanf("%lf %lf", &num1, &num2);
    
    switch(operators){

        // for(){}
        // while(){}
        // if(){}else{}

        case '+':

            result = num1 + num2;

            char *naeemsNumber = "50";
            printf("Naeems number: %s \n", naeemsNumber);

            break;

        case '-':
            result = num1 - num2;

            break;

        default:
            printf("Your input operator is wront \n");

            break;
    };

    printf("Hey, you choose: %c \n", operators);

    printf("The result is: %lf \n", result);

    return 0;
};