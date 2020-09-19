#ifndef _SIEVE_H
#define _SIEVE_H

#include <stdio.h>
#include <stdlib.h>

// Estrutura da célula da lista

typedef struct Node
{
    int value;
    char prime;
    struct Node* next;
} Node;

// Funções da lista encadeada

/*Inicia uma célula da lista*/
Node* init_Node(Node* n, int value);
/*Inicia a lista encadeada*/
Node* init_List(int N);
/*Printa a lista encadeada*/
void print_List(Node* node, int N);
/*Limpa a lista encadeada da memória*/
void remove_List(Node* mainNode);

// Funções do cálculo dos números primos

/*Verifica se um número N2 é múltiplo do número N1*/
int is_Multiple(int n1, int n2);
/*Marca na lista encadeada todos os números primos*/
void mark_prime(Node* list);
/*Retorna o proximo primo*/
Node* next_prime(Node* list);
/*Conta o número de primos*/
void count_prime(Node* list);

#endif /* _SIEVE_H */