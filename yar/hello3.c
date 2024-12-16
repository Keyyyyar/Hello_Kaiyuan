#include <stdio.h>

int main() {
    char str[] = "Hello, World!!!\n";
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    return 0;
}
