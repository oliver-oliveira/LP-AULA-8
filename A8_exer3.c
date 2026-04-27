#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    return base * potencia(base, expoente - 1);
}

int main () {
    int resultado = potencia(2, 3);
    printf("%d", potencia(2, 3)); // imprime 8
    return 0;
}