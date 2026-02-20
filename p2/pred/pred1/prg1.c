#include <stdio.h>
#include <stdbool.h>

int readint() {
    int c, i = 0;

    while (true) {
        c = getchar();
        if ('0' <= c && c <= '9') {
            i *= 10;
            i += c - '0';
        }
        else {
            return i;
        }
    }
}

int main() {
    int a = readint();

    printf("stevka: %d\n", a);
}
