#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        if (i != 7) {
            printf("%d: Hello World\n", i);
        }
        i++;
    }
    return 0;
}

