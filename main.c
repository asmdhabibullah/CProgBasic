#include <stdio.h>

int main(){

    // int, float, char

    int totalMarks = 100;
    float naeemsMarks = 85.5;
    // char naeemGot = "Naeem got %d total marks from: %s";
    char *marks = "Total marks";

    printf("%s = %d, and Naeem got = %f \n", marks, totalMarks, naeemsMarks);

    return 0;
}