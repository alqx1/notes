#include <stdio.h>

int read_int();
void print_int(int num);

int main() {
    int a = read_int();
    int b = read_int();
    print_int(a + b);
    putchar('\n');
}

int read_int() {
    int i = 0, sign = 1, buf;

    buf = getchar();
    if (buf == '-') {
        sign = -1;
        buf = getchar();
    }

    while (buf >= '0' && buf <= '9') {
        i *= 10;
        i += buf - '0';
        buf = getchar();
    }

    return sign * i;
}

void print_int(int num) {
    if (num < 0) {
        putchar('-');
        num = -num;
    }

    if (num >= 10) {
        print_int(num / 10);
    }

    putchar('0' + (num % 10));
}

