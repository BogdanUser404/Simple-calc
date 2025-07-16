//imports
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Main function
int main(int argc   , char *argv[]){
    //System waring
    if (argc != 4) {
        printf("Incorrect input. Please use the format: num1 operator num2\n");
        printf("PS: If you are entering num1 r/q/c/s, then just enter num1 /r/q/c/s 0 or any other number \n(I don't know how to fix this).\n");
        return 1;
    }
//variabls
    double num1 = atoi(argv[1]);
    double num2 = atoi(argv[3]);
    char op = argv[2][0];
    double result;
//switch block 
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case 'x':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;  
        case '%':
            result = num1 / 100 * num2;
            break;
        case '^':
            result = pow(num1, num2);
            break;
        case 'c':
            result = cos(num1);
            break;
        case 's':
            result = sin(num1);
        case 'q':
            result = cbrt(num1);
            break;
        case 'r':
            result = sqrt(num1);
            break;
    }
    printf("%f\n", result);
    return 0;
}
