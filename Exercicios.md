// EXERCÍCIOS C - Rafael de Freitas Fiel

// 1 - Fatorial

#include <stdio.h>

int fatorialRecursivo(int n) {
    // Caso base: fatorial de 0 é 1
    if (n == 0) {
        return 1;
    } else {
        // Chamada recursiva: n! = n * (n-1)!
        return n * fatorialRecursivo(n - 1);
    }
}

int main() {
    int numero = 5;
    int resultado = fatorialRecursivo(numero);
    printf("Entrada: %d -> Saida: %d\n", numero, resultado); // Output: 120
    return 0;
}

// 2 - Soma de números naturais

#include <stdio.h>

int somaNaturaisRecursiva(int n) {
    // Caso base: soma de 0 é 0
    if (n == 0) {
        return 0;
    } else {
        // Chamada recursiva: soma(n) = n + soma(n-1)
        return n + somaNaturaisRecursiva(n - 1);
    }
}

int main() {
    int numero = 4;
    int resultado = somaNaturaisRecursiva(numero);
    printf("Entrada: %d -> Saida: %d\n", numero, resultado); // Output: 10
    return 0;
}

// 3 - Sequência de Fibonacci

#include <stdio.h>

int fibonacciRecursivo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
    }
}

int main() {
    int numero = 6;
    int resultado = fibonacciRecursivo(numero);
    printf("Entrada: %d -> Saida: %d\n", numero, resultado);
    return 0;
}

// 4 - Potência

#include <stdio.h>

int potenciaRecursivaOtimizada(int x, int n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        int y = potenciaRecursivaOtimizada(x, n / 2);
        return y * y;
    } else {
        return x * potenciaRecursivaOtimizada(x, n - 1);
    }
}

int main() {
    int x = 2;
    int n = 5;
    int resultado = potenciaRecursivaOtimizada(x, n);
    printf("Entrada: x = %d, n = %d -> Saida: %d\n", x, n, resultado);
    return 0;
}

// 5 - Contagem regressiva

#include <stdio.h>

void contagemRegressiva(int n) {
    printf("%d ", n);
    if (n > 0) {
        contagemRegressiva(n - 1);
    }
}

int main() {
    int numero = 3;
    printf("Entrada: %d -> Saída: ", numero);
    contagemRegressiva(numero);
    printf("\n");
    return 0;
}

// 6 - Soma de dígitos

#include <stdio.h>

int somaDigitosRecursiva(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + somaDigitosRecursiva(n / 10);
    }
}

int main() {
    int numero = 1234;
    int resultado = somaDigitosRecursiva(numero);
    printf("Entrada: %d -> Saida: %d\n", numero, resultado);
    return 0;
}

// 7 - Inversão de string

#include <stdio.h>
#include <string.h>

void inverteStringRecursiva(char *str, int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverteStringRecursiva(str, inicio + 1, fim - 1);
}

void inverteString(char *str) {
    int tamanho = strlen(str);
    inverteStringRecursiva(str, 0, tamanho - 1);
}

int main() {
    char str[] = "recursão";
    
    printf("String original: %s\n", str);
    inverteString(str);
    printf("String invertida: %s\n", str);

    return 0;
}

// 8 - Verificação de palíndromo

#include <stdio.h>
#include <string.h>

int verificaPalindromoRecursivo(const char *str, int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }
    if (str[inicio] != str[fim]) {
        return 0;
    }
    return verificaPalindromoRecursivo(str, inicio + 1, fim - 1);
}

int verificaPalindromo(const char *str) {
    return verificaPalindromoRecursivo(str, 0, strlen(str) - 1);
}

int main() {
    const char *str1 = "arara";
    const char *str2 = "casa";

    printf("'%s' e um palindromo? %d\n", str1, verificaPalindromo(str1));
    printf("'%s' e um palindromo? %d\n", str2, verificaPalindromo(str2));

    return 0;
}

// 9 -  Máximo divisor comum (MDC)

#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

int main() {
    int a = 48;
    int b = 18;

    printf("O MDC de %d e %d é: %d\n", a, b, mdc(a, b));

    return 0;
}

// 10 -  Multiplicação recursiva

#include <stdio.h>

int multiplicar(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a + multiplicar(a, b - 1);
}

int main() {
    int a = 4;
    int b = 5;

    printf("A multiplicação de %d e %d é: %d\n", a, b, multiplicar(a, b));

    return 0;
}

// 11 -  Contagem de caracteres

#include <stdio.h>

int contarCaracterRecursivo(const char *str, char caractere) {
    if (*str == '\0') {
        return 0;
    }
    int contadorAtual = (*str == caractere) ? 1 : 0;
    return contadorAtual + contarCaracterRecursivo(str + 1, caractere);
}

int main() {
    const char *texto = "abracadabra";
    char caractere = 'a';
    int quantidade = contarCaracterRecursivo(texto, caractere);

    printf("O caractere '%c' aparece %d vezes na string "%s".\n", caractere, quantidade, texto);

    return 0;
}

// 12 -  Soma de elementos de um array

#include <stdio.h>

int somaRecursiva(int array[], int tamanho, int indice) {
    if (indice == tamanho) {
        return 0;
    }
    return array[indice] + somaRecursiva(array, tamanho, indice + 1);
}

int main() {
    int array[] = {1, 2, 3, 4};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int soma = somaRecursiva(array, tamanho, 0);

    printf("A soma dos elementos do array é: %d\n", soma);

    return 0;
}

// 13 -  Verificação de número primo

#include <stdio.h>
#include <math.h>

int verificarPrimoRecursivo(int n, int divisor) {
    if (n <= 1) {
        return 0;
    }
    if (divisor > sqrt(n)) {
        return 1;
    }
    if (n % divisor == 0) {
        return 0;
    }
    return verificarPrimoRecursivo(n, divisor + 1);
}

int ePrimo(int n) {
    return verificarPrimoRecursivo(n, 2);
}

int main() {
    int numero = 7;
    printf("O número %d é primo? %d\n", numero, ePrimo(numero));

    numero = 9;
    printf("O número %d é primo? %d\n", numero, ePrimo(numero));

    return 0;
}

// 14 -  Conversão de decimal para binário

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void converterParaBinarioRecursivo(int numero, char *resultado, int *indice) {
    if (numero > 0) {
        converterParaBinarioRecursivo(numero / 2, resultado, indice);
        resultado[*indice] = (numero % 2) + '0';
        (*indice)++;
    }
}

char* converterParaBinario(int numero) {
    char *resultado = (char *)malloc(33);
    int indice = 0;
    
    if (numero == 0) {
        strcpy(resultado, "0");
        return resultado;
    }

    converterParaBinarioRecursivo(numero, resultado, &indice);
    resultado[indice] = '\0';

    return resultado;
}

int main() {
    int numero = 10;
    char *binario = converterParaBinario(numero);
    printf("O número %d em binário é: %s\n", numero, binario);

    free(binario);
    return 0;
}

// 15 -  Impressão de números pares

#include <stdio.h>

void imprimirParesRecursivo(int n, int atual) {
    if (atual > n) {
        return;
    }
    printf("%d ", atual);
    imprimirParesRecursivo(n, atual + 2);
}

void imprimirPares(int n) {
    imprimirParesRecursivo(n, 0);
}

int main() {
    int n = 6;
    imprimirPares(n);
    printf("\n");
    return 0;
}

// 16 -  Impressão de números ímpares

#include <stdio.h>

void imprimirImparesRecursivo(int n, int atual) {
    if (atual > n) {
        return;
    }
    printf("%d ", atual);
    imprimirImparesRecursivo(n, atual + 2);
}

void imprimirImpares(int n) {
    imprimirImparesRecursivo(n, 1);
}

int main() {
    int n = 7;
    imprimirImpares(n);
    printf("\n");
    return 0;
}