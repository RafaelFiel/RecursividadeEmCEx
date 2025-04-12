// EXERCÍCIOS DE RECURSÃO EM C
// Rafael de Freitas Fiel - 2025

// 1 - Fatorial

#include <stdio.h>

int fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorialRecursivo(n - 1);
    }
}

int main() {
    int numero = 5;
    int resultado = fatorialRecursivo(numero);
    printf("Entrada: %d -> Saida: %d\n", numero, resultado);
    return 0;
}

// 2 - Soma de números naturais

#include <stdio.h>

int somaNaturaisRecursiva(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somaNaturaisRecursiva(n - 1);
    }
}

int main() {
    int numero = 4;
    int resultado = somaNaturaisRecursiva(numero);
    printf("Entrada: %d -> Saida: %d\n", numero, resultado);
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
    int n = a;
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
    printf("Entrada: %d -> Saida: ", numero);
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
    char str[] = "recursao";
    
    printf("Entrada: %s -> Saida: ", str);
    inverteString(str);
    printf("%s\n", str);

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

    printf("Entrada: %s -> Saida: %d\n", str1, verificaPalindromo(str1));
    printf("Entrada: %s -> Saida: %d\n", str2, verificaPalindromo(str2));

    return 0;
}

// 9 - Máximo divisor comum (MDC)

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

    printf("Entrada: %d e %d -> Saida: %d\n", a, b, mdc(a, b));

    return 0;
}

// 10 - Multiplicação recursiva

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

    printf("Entrada: %d e %d -> Saida: %d\n", a, b, multiplicar(a, b));

    return 0;
}

// 11 - Contagem de caracteres

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

    printf("Entrada: %s, %c -> Saida: %d\n", texto, caractere, quantidade);

    return 0;
}

// 12 - Soma de elementos de um array

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

    printf("Entrada: {1, 2, 3, 4} -> Saida: %d\n", soma);

    return 0;
}

// 13 - Verificação de número primo

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
    int numero1 = 7;
    int numero2 = 9;
    printf("Entrada: %d -> Saida: %d\n", numero1, ePrimo(numero1));
    printf("Entrada: %d -> Saida: %d\n", numero2, ePrimo(numero2));

    return 0;
}

// 14 - Conversão de decimal para binário

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
    printf("Entrada: %d -> Saida: %s\n", numero, binario);

    free(binario);
    return 0;
}

// 15 - Impressão de números pares

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
    printf("Entrada: %d -> Saida: ", n);
    imprimirPares(n);
    printf("\n");
    return 0;
}

// 16 - Impressão de números ímpares

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
    printf("Entrada: %d -> Saida: ", n);
    imprimirImpares(n);
    printf("\n");
    return 0;
}

// 17 - Busca em array

#include <stdio.h>

int buscaRecursiva(int array[], int tamanho, int indice, int elemento) {
    if (indice == tamanho) {
        return 0;
    }
    if (array[indice] == elemento) {
        return 1;
    }
    return buscaRecursiva(array, tamanho, indice + 1, elemento);
}

int buscaElemento(int array[], int tamanho, int elemento) {
    return buscaRecursiva(array, tamanho, 0, elemento);
}

int main() {
    int array[] = {2, 4, 6, 8};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int elemento1 = 6;
    int elemento2 = 5;
    
    printf("Entrada: {2, 4, 6, 8}, %d -> Saida: %d\n", elemento1, buscaElemento(array, tamanho, elemento1));
    printf("Entrada: {2, 4, 6, 8}, %d -> Saida: %d\n", elemento2, buscaElemento(array, tamanho, elemento2));
    
    return 0;
}

// 18 - Comprimento de uma string

#include <stdio.h>

int comprimentoStringRecursivo(const char *str) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + comprimentoStringRecursivo(str + 1);
}

int main() {
    const char *str = "recursivo";
    int comprimento = comprimentoStringRecursivo(str);
    
    printf("Entrada: %s -> Saida: %d\n", str, comprimento);
    
    return 0;
}

// 19 - Torre de Hanói

#include <stdio.h>

void hanoi(int n, char origem, char auxiliar, char destino) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    
    hanoi(n - 1, origem, destino, auxiliar);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    hanoi(n - 1, auxiliar, origem, destino);
}

int main() {
    int n = 2;
    
    printf("Entrada: %d -> Saida:\n", n);
    hanoi(n, 'A', 'B', 'C');
    
    return 0;
}

// 20 - Permutações de uma string

#include <stdio.h>
#include <string.h>

void trocar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutacoesRecursivas(char *str, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s ", str);
        return;
    }
    
    for (int i = inicio; i <= fim; i++) {
        trocar(&str[inicio], &str[i]);
        permutacoesRecursivas(str, inicio + 1, fim);
        trocar(&str[inicio], &str[i]); // backtracking
    }
}

void gerarPermutacoes(char *str) {
    int n = strlen(str);
    permutacoesRecursivas(str, 0, n - 1);
}

int main() {
    char str[] = "abc";
    
    printf("Entrada: %s -> Saida: ", str);
    gerarPermutacoes(str);
    printf("\n");
    
    return 0;
}

// 21 - Combinações de um array

#include <stdio.h>

void imprimirCombinacao(int combinacao[], int k) {
    printf("{");
    for (int i = 0; i < k; i++) {
        printf("%d", combinacao[i]);
        if (i < k - 1) printf(",");
    }
    printf("} ");
}

void combinacoesRecursivas(int array[], int combinacao[], int inicio, int fim, int index, int k) {
    if (index == k) {
        imprimirCombinacao(combinacao, k);
        return;
    }
    
    for (int i = inicio; i <= fim && fim - i + 1 >= k - index; i++) {
        combinacao[index] = array[i];
        combinacoesRecursivas(array, combinacao, i + 1, fim, index + 1, k);
    }
}

void gerarCombinacoes(int array[], int n, int k) {
    int combinacao[k];
    combinacoesRecursivas(array, combinacao, 0, n - 1, 0, k);
}

int main() {
    int array[] = {1, 2, 3};
    int n = sizeof(array) / sizeof(array[0]);
    int k = 2;
    
    printf("Entrada: {1, 2, 3}, k = %d -> Saida: ", k);
    gerarCombinacoes(array, n, k);
    printf("\n");
    
    return 0;
}

// 22 - Subconjuntos de um array

#include <stdio.h>

void imprimirSubconjunto(int array[], int subconjunto[], int n) {
    printf("{");
    int primeiro = 1;
    for (int i = 0; i < n; i++) {
        if (subconjunto[i]) {
            if (!primeiro) {
                printf(",");
            }
            printf("%d", array[i]);
            primeiro = 0;
        }
    }
    printf("} ");
}

void gerarSubconjuntosRecursivos(int array[], int subconjunto[], int n, int index) {
    if (index == n) {
        imprimirSubconjunto(array, subconjunto, n);
        return;
    }
    
    subconjunto[index] = 0;
    gerarSubconjuntosRecursivos(array, subconjunto, n, index + 1);
    
    subconjunto[index] = 1;
    gerarSubconjuntosRecursivos(array, subconjunto, n, index + 1);
}

void gerarSubconjuntos(int array[], int n) {
    int subconjunto[n];
    gerarSubconjuntosRecursivos(array, subconjunto, n, 0);
}

int main() {
    int array[] = {1, 2};
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("Entrada: {1, 2} -> Saida: ");
    gerarSubconjuntos(array, n);
    printf("\n");
    
    return 0;
}

// 23 - Merge Sort

#include <stdio.h>

void merge(int arr[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    
    int L[n1], R[n2];
    
    for (i = 0; i < n1; i++)
        L[i] = arr[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[meio + 1 + j];
    
    i = 0;
    j = 0;
    k = inicio;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        
        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio + 1, fim);
        
        merge(arr, inicio, meio, fim);
    }
}

int main() {
    int arr[] = {5, 3, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Entrada: {5, 3, 8, 1} -> Saida: ");
    
    mergeSort(arr, 0, n - 1);
    
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("}\n");
    
    return 0;
}

// 24 - Quick Sort

#include <stdio.h>

void trocar(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int particionar(int arr[], int baixo, int alto) {
    int pivo = arr[alto];
    int i = (baixo - 1);
    
    for (int j = baixo; j <= alto - 1; j++) {
        if (arr[j] < pivo) {
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[alto]);
    return (i + 1);
}

void quickSort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(arr, baixo, alto);
        
        quickSort(arr, baixo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}

int main() {
    int arr[] = {9, 2, 5, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Entrada: {9, 2, 5, 1, 7} -> Saida: ");
    
    quickSort(arr, 0, n - 1);
    
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("}\n");
    
    return 0;
}

// 25 - Busca binária

#include <stdio.h>

int buscaBinariaRecursiva(int arr[], int esquerda, int direita, int x) {
    if (direita >= esquerda) {
        int meio = esquerda + (direita - esquerda) / 2;
        
        if (arr[meio] == x)
            return meio;
        
        if (arr[meio] > x)
            return buscaBinariaRecursiva(arr, esquerda, meio - 1, x);
        
        return buscaBinariaRecursiva(arr, meio + 1, direita, x);
    }
    
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    
    int resultado = buscaBinariaRecursiva(arr, 0, n - 1, x);
    
    printf("Entrada: {1, 3, 5, 7, 9}, %d -> Saida: %d\n", x, resultado);
    
    return 0;
}

// 26 - Exponenciação rápida

#include <stdio.h>

int exponenciacaoRapida(int x, int n) {
    if (n == 0)
        return 1;
    
    if (n % 2 == 0) {
        int temp = exponenciacaoRapida(x, n / 2);
        return temp * temp;
    } else {
        return x * exponenciacaoRapida(x, n - 1);
    }
}

int main() {
    int x = 3;
    int n = 4;
    
    int resultado = exponenciacaoRapida(x, n);
    
    printf("Entrada: x = %d, n = %d -> Saida: %d\n", x, n, resultado);
    
    return 0;
}

// 27 - Caminho em uma matriz

#include <stdio.h>

void imprimirCaminho(int caminho[][2], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("(%d,%d)", caminho[i][0], caminho[i][1]);
        if (i < tamanho - 1) printf(" -> ");
    }
}

int encontrarCaminhoRecursivo(int x1, int y1, int x2, int y2, int caminho[][2], int index) {
    caminho[index][0] = x1;
    caminho[index][1] = y1;
    
    if (x1 == x2 && y1 == y2) {
        return index + 1;
    }
    
    int tamanho = 0;
    
    if (x1 < x2) {
        tamanho = encontrarCaminhoRecursivo(x1 + 1, y1, x2, y2, caminho, index + 1);
        if (tamanho > 0) return tamanho;
    }
    
    if (y1 < y2) {
        tamanho = encontrarCaminhoRecursivo(x1, y1 + 1, x2, y2, caminho, index + 1);
        if (tamanho > 0) return tamanho;
    }
    
    return 0;
}

int main() {
    int x1 = 0, y1 = 0;
    int x2 = 2, y2 = 2;
    int caminho[100][2];
    
    printf("Entrada: (%d,%d) a (%d,%d) -> Saida: ", x1, y1, x2, y2);
    
    int tamanho = encontrarCaminhoRecursivo(x1, y1, x2, y2, caminho, 0);
    
    if (tamanho > 0) {
        imprimirCaminho(caminho, tamanho);
    } else {
        printf("Nenhum caminho encontrado");
    }
    
    printf("\n");
    
    return 0;
}

// 28 - Problema das N-rainhas

#include <stdio.h>
#include <stdlib.h>

int ehSeguro(int tabuleiro[], int linha, int coluna, int n) {
    for (int i = 0; i < linha; i++) {
        if (tabuleiro[i] == coluna || 
            tabuleiro[i] - i == coluna - linha || 
            tabuleiro[i] + i == coluna + linha) {
            return 0;
        }
    }
    return 1;
}

void imprimirSolucao(int tabuleiro[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (tabuleiro[i] == j) {
                printf("Q ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void resolverNRainhasRecursivo(int tabuleiro[], int linha, int n) {
    if (linha == n) {
        imprimirSolucao(tabuleiro, n);
        return;
    }
    
    for (int coluna = 0; coluna < n; coluna++) {
        if (ehSeguro(tabuleiro, linha, coluna, n)) {
            tabuleiro[linha] = coluna;
            resolverNRainhasRecursivo(tabuleiro, linha + 1, n);
        }
    }
}

void resolverNRainhas(int n) {
    int *tabuleiro = (int *)malloc(n * sizeof(int));
    
    printf("Entrada: n = %d -> Saida:\n", n);
    resolverNRainhasRecursivo(tabuleiro, 0, n);
    
    free(tabuleiro);
}

int main() {
    int n = 4;
    resolverNRainhas(n);
    
    return 0;
}

// 29 - Labirinto com backtracking

#include <stdio.h>

#define N 3
#define M 4

int ehCaminhoSeguro(int labirinto[N][M], int x, int y, int solucao[N][M]) {
    return (x >= 0 && x < N && y >= 0 && y < M && labirinto[x][y] == 0 && solucao[x][y] == 0);
}

int resolverLabirintoRecursivo(int labirinto[N][M], int x, int y, int solucao[N][M]) {
    if (x == N - 1 && y == M - 1 && labirinto[x][y] == 0) {
        solucao[x][y] = 1;
        return 1;
    }
    
    if (ehCaminhoSeguro(labirinto, x, y, solucao)) {
        solucao[x][y] = 1;
        
        if (resolverLabirintoRecursivo(labirinto, x + 1, y, solucao))
            return 1;
        
        if (resolverLabirintoRecursivo(labirinto, x, y + 1, solucao))
            return 1;
        
        solucao[x][y] = 0;
        return 0;
    }
    
    return 0;
}

void imprimirSolucao(int solucao[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (solucao[i][j] == 1)
                printf("* ");
            else
                printf("%d ", solucao[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int labirinto[N][M] = {
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {1, 0, 1, 0}
    };
    
    int solucao[N][M] = {{0}};
    
    printf("Labirinto:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", labirinto[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSaida:\n");
    
    if (resolverLabirintoRecursivo(labirinto, 0, 0, solucao)) {
        imprimirSolucao(solucao);
    } else {
        printf("Nao existe solucao\n");
    }
    
    return 0;
}

// 30 - Gerador de parênteses válidos

#include <stdio.h>

void gerarParentesesRecursivo(int n, int abertos, int fechados, char *str, int index) {
    if (index == 2 * n) {
        str[index] = '\0';
        printf("%s ", str);
        return;
    }
    
    if (abertos < n) {
        str[index] = '(';
        gerarParentesesRecursivo(n, abertos + 1, fechados, str, index + 1);
    }
    
    if (fechados < abertos) {
        str[index] = ')';
        gerarParentesesRecursivo(n, abertos, fechados + 1, str, index + 1);
    }
}

void gerarParenteses(int n) {
    char str[2 * n + 1];
    gerarParentesesRecursivo(n, 0, 0, str, 0);
}

int main() {
    int n = 3;
    
    printf("Entrada: n = %d -> Saida: ", n);
    gerarParenteses(n);
    printf("\n");
    
    return 0;
}