/*
Lab1 in SDA
NOTE: this version DOESN'T USE BOOL functions, such as &&, || etc.
TASK: get X from console and return y, which =
    -3*x * 2/5 +9, if 0 <= x <= 8 OR x >= 16
    15*x - 2, if x < -1
    OTHERWISE return error message

Proudly made by Andrew

TEST VALUES: 8; 20.7; -3; "qwerty"; 10
*/

// Import basic I/O library
#include <stdio.h>

// Main function. Should return '0' if there are no errors during work,
// otherwise return error code
int main(){
    // declare variable named 'x' and 'y', type of float
    float x, y;

    printf("Enter x:\n> ");
    // read float number("%e") from console to variable (&x), & means handle)
    if (scanf("%e", &x) != 1){
        printf("Invalid input. x should be a number!\n");
        return 1;
    }

    if (x >= 0){
        if (x <= 8){
            y = (-3)*x*x/5+9;
        } else if (x >= 16){
            y = (-3)*x*x/5+9;
        } else {
            printf("Invalid input. x should be:\n");
            printf(" - lower than (-1)\n");
            printf(" - in range [0;8]\n");
            printf(" - higher than 16\n");
            return 1;
        }
    } else if (x < -1){
        y = 15*x -2;
    } else {
        printf("Invalid input. x should be:\n");
        printf(" - lower than (-1)\n");
        printf(" - in range [0;8]\n");
        printf(" - higher than 16\n");
        return 1;
    }

    // if x is correct, print answer
    printf("y = %f\n", y);
    return 0;
}
