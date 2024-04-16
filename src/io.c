#include <stdio.h>

int main()
{ 
    printf("C Programming \n\n\n");
    // Intiger
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);
    printf("Number: %d \n\n\n", testInteger);

    // Float
    float testFloat;
    printf("Enter a Float value: ");
    scanf("%f", &testFloat);

    printf("Flaot number: %f \n\n\n", testFloat);

    // Char

    char testChar[1204]; // C--> 16b-32b
    printf("Enter a character: ");
    scanf("%s", testChar);

    printf("Hey, your choose is: %s \n\n\n", testChar);

    return 0;
}