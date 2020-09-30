#include <stdlib.h>
#include "Pilha.h"

#define MAX_TAM 1000000

struct pilha {
    ArvBin* vetor[MAX_TAM];
    int tam;
};

Pilha* cria_pilha() {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->tam = 0;
    return p;
}

int tamanho_pilha(Pilha* p) {
    return p->tam;
}

void push(Pilha* p, ArvBin* no) {
    p->vetor[p->tam] = no;
    p->tam = p->tam + 1;
}

ArvBin* pop(Pilha* p) {
    p->tam = p->tam - 1;
    return p->vetor[p->tam];
}

void free_pilha(Pilha* p) {
    free(p);
}