//
// Created by Doorva on 10/3/2025.
//
#include <stdio.h>

void digitCounter(void) {
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
}