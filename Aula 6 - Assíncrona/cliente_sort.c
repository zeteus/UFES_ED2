#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "item.h"
#include "select_sort.h"
#include "insert_sort.h"
#include "bubble_sort.h"
#include "shaker_sort.h"

extern void sort(Item *a, int lo, int hi);

int main(char argc, char** argv) {
    // Receber como um parˆametro o n´umero N de itens a serem ordenados.
    int N = atoi(argv[1]);
    // Alocar dinamicamente um array para guardar os N itens na mem´oria.
    Item *a = (Item *) malloc(N * sizeof(Item));
    //  Ler os N itens (no caso aqui, inteiros) de stdin para o array.
        // for(int i = 0; i < N; i++) scanf("%d", &a[i]);
    //  Ler os N itens do arquivo
    int i = 0;
    char *line_buf = NULL;
    size_t line_buf_size = 0;
    int line_count = 0;
    ssize_t line_size;
    FILE *file = NULL;
    file = fopen(argv[2][0], "r");
    line_size = getline(&line_buf, &line_buf_size, file);
    while (line_size >= 0) {
        a[i] = atoi(line_buf);
        line_size = getline(&line_buf, &line_buf_size, file);
        line_count++;
        i++;
    }
    fclose(file);
    // Print do vetor desordenado
        // printf("\nVetor desordenado:\n");
        // for(int i = 0; i < N; i++) printf("[%d]", a[i]);
    // Executar um algoritmo de ordena¸c˜ao e medir o seu tempo, como j´a feito em laborat´orios anteriores.
    clock_t time;
    // int aux;
    time = clock();
    sort(a, 0, N);
    time = clock() - time;
    // Print do tempo de execucao
    printf("\n\nTempo de execucao: %lf\n", ((double)time)/((CLOCKS_PER_SEC/1000)));
    // Print do vetor ordenado
        // printf("\nVetor ordenado:\n");
        // for(int i = 0; i < N; i++) printf("[%d]", a[i]);
    // Liberar a mem´oria do array.
    free(a);
}