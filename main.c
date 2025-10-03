#include <stdio.h>

// build (the hammer button) compiles the program
// run compiles AND runs it
// it is better to build first so you can spot static syntax errors

int main(void) {
    // the void parameter is default, you can leave it empty and mean the same thing
    // all executables have the main function
    int input;
    scanf("%d", &input); // leading zeros are ignored
    int digit;
    scanf("%d", &digit);
    int count = 0;
    if (input == 0 && digit == 0) {
        printf("The digit %d appears %d times in %d.\n", digit, 1, input);
    }
    else if (input == 0) {
        printf("The digit %d appears %d times in %d.\n", digit, 0, input);
    }
    else {
        int start = input;
        while (start > 0) {
            int current = start % 10;
            if (current == digit) {
                count++;
            }
            start /= 10;
        }
        printf("The digit %d appears %d times in %d.\n", digit, count, input);
    }
    return 0;
}