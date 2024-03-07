#include <stdio.h>

int pertenceFibonacci(int numero) {
    int a = 0, b = 1, soma;

    while (a <= numero) {
        if (a == numero) {
            return 1; // Se o n�mero pertencer � sequ�ncia de Fibonacci
        }
        soma = a + b;
        a = b;
        b = soma;
    }

    return 0; // Se o n�mero n�o pertencer � sequ�ncia de Fibonacci
}

int main() {
    int numero;

    
    printf("Informe um numero: ");
    scanf("%d", &numero);

    
    if (pertenceFibonacci(numero)) {
        printf("%d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("%d nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}
