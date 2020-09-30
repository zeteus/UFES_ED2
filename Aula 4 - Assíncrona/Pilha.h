#ifndef PILHA_H
#define PILHA_H

#include "BinaryTree.h"

typedef struct pilha Pilha;

Pilha* cria_pilha();

int tamanho_pilha(Pilha* p);

void push(Pilha* p, ArvBin* no);

ArvBin* pop(Pilha* p);

void free_pilha(Pilha* p);

#endif /*PILHA_H*/