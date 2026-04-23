#include <stdio.h>

void lanca(int numero) {
    if(numero < 1) {
        printf("decolar!");
    } else {
        printf("%d, ", numero);
        lanca(numero - 1);
    }
}

int main () {
    int valor;
    
    printf("Digite um numero: ");
    scanf("%d", &valor);
    
    int numero = valor;
    lanca(numero);
    return 0;
}
