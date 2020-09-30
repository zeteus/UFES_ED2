#ifndef FILA_H
#define FILA_H

#include "BinaryTree.h"

typedef struct fila Fila;

Fila* cria_fila();

int tamanho_fila(Fila* f);

void enfileira(Fila* f, ArvBin* no);

ArvBin* desenfileira(Fila* f);

void free_fila(Fila* f);

#endif /*FILA_H*/