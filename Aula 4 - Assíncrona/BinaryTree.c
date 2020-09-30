#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"
#include "Pilha.h"
#include "Fila.h"

/**
Contem um inteiro e dois apontadores (esquerda/direita)
*/
typedef struct tNO{
    int num;
    struct tNO *pEsq, *pDir;
}NO;

/**
Inicializa a árvore e deixa a raiz NULL
retorna: Raiz alocada e apontada para NULL
*/
ArvBin* cria_ArvBin(){
    ArvBin *raiz = (ArvBin*) malloc(sizeof(ArvBin));
    // raiz -> pEsq = NULL;
    // raiz -> pDir = NULL;
    *raiz = NULL;

    return raiz;
}

/**
Inicializa um NO com sua Esq e Dir igual a NULL
retorna: No criado
*/
ArvBin cria_NO(int valor){
    ArvBin noAux =(ArvBin) malloc(sizeof(NO));
    noAux -> pEsq = NULL;
    noAux -> pDir = NULL;
    noAux -> num = valor;
    
    return noAux;
}

/**
Insere 'valor' na árvore utilizando a regra que o filho esquerdo é menor que a raiz que é menor o filho direito.
Retorna: 1 em caso de sucesso. 
*/
int insere_ArvBin(ArvBin* raiz, int valor){
    if(raiz == NULL) return 0;
    if(estaVazia_ArvBin(*raiz)){
        *raiz = cria_NO(valor);
        return 1;
    }

    if((*raiz) -> num > valor) return insere_ArvBin(&(*raiz) -> pEsq, valor);
    if((*raiz) -> num < valor) return insere_ArvBin(&(*raiz) -> pDir, valor);
    
    return 0;
}

/**
Verifica se a árvore está vazia
*/
int estaVazia_ArvBin(ArvBin raiz){
    if(raiz == NULL)
        return 1;
    else{
        return 0;
    }
}

/*retorna qual a altura de uma árvore binária. */
int altura_ArvBin(ArvBin *raiz) {
    if (estaVazia_ArvBin(*raiz)) return -1;
    int altEsq = altura_ArvBin((*raiz)->pEsq);
    int altDir = altura_ArvBin((*raiz)->pDir);
    if (altEsq > altDir) {
        return altEsq + 1;
    } else {
        return altDir + 1;
    }
}

/** Imprime em pre-ordem */ 
void r_preOrdem_ArvBin(ArvBin *raiz){
    if(estaVazia_ArvBin(*raiz)) return;
    if((*raiz) == NULL) return;
    printf("%d\n", (*raiz) -> num);
    preOrdem_ArvBin(&(*raiz) -> pEsq);
    preOrdem_ArvBin(&(*raiz) -> pDir);
}

/** Imprime em-ordem */ 
void r_emOrdem_ArvBin(ArvBin *raiz){
    if(estaVazia_ArvBin(*raiz)) return;
    if((*raiz) == NULL) return;
    preOrdem_ArvBin(&(*raiz) -> pEsq);
    printf("%d\n", (*raiz) -> num);
    preOrdem_ArvBin(&(*raiz) -> pDir);
}

/** Imprime em pós-ordem */ 
void r_posOrdem_ArvBin(ArvBin *raiz){
    if(estaVazia_ArvBin(*raiz)) return;
    if((*raiz) == NULL) return;
    preOrdem_ArvBin(&(*raiz) -> pEsq);
    preOrdem_ArvBin(&(*raiz) -> pDir);
    printf("%d\n", (*raiz) -> num);
}

/** Imprime em pre-ordem */ 
void i_preOrdem_ArvBin(ArvBin *raiz) {
    Pilha *p = cria_pilha();
    while ((tamanho_pilha(p) > 0) || (raiz != NULL)) {
        if (raiz != NULL) {
            printf("%d\n", (*raiz) -> num);
            if ((*raiz)->pDir != NULL) push(p, (*raiz)->pDir);
            raiz = (*raiz)->pEsq;
        } else {
          raiz = pop(p);
        }
    }
    free_pilha(p);
}

/** Imprime em-ordem */
void i_emOrdem_ArvBin(ArvBin *raiz) {
    Pilha *p = cria_pilha();
    while ((tamanho_pilha(p) > 0) || (raiz != NULL)) {
        if (raiz != NULL) {
            push(p, (*raiz)->pDir);
            raiz = (*raiz)->pEsq;
        } else {
          raiz = pop(p);
          printf("%d\n", (*raiz) -> num);
          raiz = (*raiz)->pDir;
        }
    }
    free_pilha(p);
}

/** Imprime nível */
void it_emNivel_ArvBin(ArvBin *raiz) {
    Fila *f = queue_create();
    enfileira(f, raiz);
    while (tamanho_fila(f) > 0) {
        raiz = desenfileira(f);
        printf("%d\n", (*raiz) -> num);
        if ((*raiz)->pEsq != NULL) enfileira(f, (*raiz)->pEsq);
        if ((*raiz)->pDir != NULL) enfileira(f, (*raiz)->pDir);
    }
    free_fila(f);
}

/**
Libera um NO da memória
*/
void libera_no(ArvBin *raiz){
    if(!estaVazia_ArvBin(*raiz)){
        if(!(*raiz) -> pEsq == NULL){
        libera_ArvBin(&(*raiz) -> pEsq);
        }
        if(!(*raiz) -> pEsq == NULL){
        libera_ArvBin(&(*raiz) -> pDir);
        }
    }
    free(*raiz);
}
/**
Libera a árvore binária da memória
*/
void libera_ArvBin(ArvBin *raiz){
    if(raiz == NULL) return;
    
    libera_no(raiz);

    // free(raiz);
}
