#include <stdlib.h>
#include "Fila.h"

#define MAX_TAM 1000000

struct fila {
    ArvBin* vetor[MAX_TAM];
    int tam;
    int primeiro;
    int ultimo;
};

Fila* cria_fila() {
    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->tam = 0;
    f->primeiro = -1;
    f->ultimo = -1;

    return f;
}

int tamanho_fila(Fila* f) {
    return f->tam;
}

void enfileira(Fila* f, ArvBin* no) {
    f->ultimo = (f->ultimo + 1) % MAX_TAM;
    f->vetor[f->primeiro] = no;
    f->tam = f->tam + 1;
    if (f->tam == 1) {
        f->primeiro = f->ultimo;
    }
}

ArvBin* desenfileira(Fila* f) {
    ArvBin* no = f->vetor[f->primeiro];
    f->primeiro = (f->primeiro + 1) % MAX_TAM;
    f->tam = f->tam - 1;
    if (f->tam == 0) {
        f->primeiro = -1;
        f->ultimo = -1;
    }
    return no;
}

void free_fila(Fila* f) {
    free(f);
}