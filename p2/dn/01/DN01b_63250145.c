#include <stdio.h>

int dvojiski_log();
void print_int(int num);

int main() {
    int a = dvojiski_log();
    print_int(a);
    putchar('\n');
}

int dvojiski_log() {
    int potenca = 0, buf, count = 0;
    while ((buf = getchar()) == '0');
    if (buf != '1') {
        return 0;
    }

    while (buf == '0' || buf == '1') {
        if (buf == '1') {
            count++;
        }
        potenca++;
        buf = getchar();
    }
    return count == 1 ? potenca - 1: potenca;
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
