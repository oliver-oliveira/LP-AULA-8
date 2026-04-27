#include <stdio.h>

int somar(int n) {
    if (n <= 1) {
        return n;
    }
    return n + somar(n - 1);
}

int main () {
    printf("%d", soma(5)); // imprime 15
    return 0;
}