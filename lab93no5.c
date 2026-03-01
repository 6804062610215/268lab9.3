#include <stdio.h>
#define MAX 100

int sumDigitChar(char str[]);

int main() {
    char text[MAX];

    printf("Enter input: ");
    fgets(text, MAX, stdin);

    printf("Sum of digit char: %d\n", sumDigitChar(text));

    return 0;
}

int sumDigitChar(char str[]) {
    int i = 0, sum = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
        }
        i++;
    }
    return sum;
}
