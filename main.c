#include <stdio.h>    
int main()
{ 
    printf("C Programming \n\n\n");

    // int testInteger = 5; // Static/Constant
    
    // printf("Number = %d \n", testInteger);

    // float number1 = 13.5;
    // double number2 = 12.4;

    // printf("number1 = %f \n", number1);
    // printf("number2 = %lf \n", number2);

    // char *chr = 'a';
    // printf("character = %c", chr); 
    
    // New class: (input/output)

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


// #include <stdio.h>

// int main(){

//     // int, float, char

//     int totalMarks = 100;
//     float naeemsMarks = 85.5;
//     // char naeemGot = "Naeem got %d total marks from: %s";
//     char *marks = "Total marks";

//     printf("%s = %d, and Naeem got = %f \n", marks, totalMarks, naeemsMarks);


//     // 

    




//     return 0;
// }