#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "BinaryTree.h"

int main(char argc, char** argv) {
    srand(time(NULL));
    int N = atoi(argv[1]);
    int dados[N];
    for(int i = 0; i < N; i++ ) dados[i] = rand();

    ArvBin* raiz = cria_ArvBin();

    int i;
    for(i=0; i < N; i++) insere_ArvBin(raiz,dados[i]);

    int alt = altura_ArvBin(raiz);
    printf("Altura: %d\n", alt);

    r_emOrdem_ArvBin(raiz);
    printf("\n");
    r_preOrdem_ArvBin(raiz);
    printf("\n");
    r_posOrdem_ArvBin(raiz);
    printf("\n");

    i_emOrdem_ArvBin(raiz);
    printf("\n");
    i_preOrdem_ArvBin(raiz);
    printf("\n");
    i_posOrdem_ArvBin(raiz);
    printf("\n");

    libera_ArvBin(raiz);

    return 0;
}