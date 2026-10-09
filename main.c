#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[256];

    printf("Enter a string (in English): ");

    // fgets зчитує весь рядок разом із пробілами
    if (fgets(str, sizeof(str), stdin) != NULL) {

        // Проходимо по кожному символу рядка до кінцевого нуля '\0'
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - ('a' - 'A'); // Перетворення в регістр
            }
        }

        printf("Result: %s", str);
    }

    return 0;
}