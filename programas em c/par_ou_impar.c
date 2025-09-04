#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d é um numero par.\n", num);
    else
        printf("%d é um numero impar.\n", num);

    return 0;
}
