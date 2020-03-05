#ifndef _UF_H
#define _UF_H

#include <stdio.h>

typedef struct UF {
    int N;
    int *id;
    int *sz;
} *UF;

// Inicializa o Union Find
UF UF_init(UF uf, int size);

// Retorna a raíz do nó
int UF_find(UF uf, int p);

// Retorna se existe caminho entre dois nós
int UF_conected(UF uf, int p, int q);

// Faz a união dos nós
void UF_union(UF uf, int p, int q);

// Limpa geral
void UF_free(UR uf);

#endif // _UF_H