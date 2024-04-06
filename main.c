#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("La suma de %d y %d es: %d\n", num1, num2, sum);

    return 0;
}