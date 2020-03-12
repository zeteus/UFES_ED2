#include "Josephus.h"

Node* init_Node(Node* proxNode, int value) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->value = value;
    node->next = proxNode;
    return node;
}

Node* init_List(int N) {
    Node* mainNode = init_Node(NULL, N);
    Node* atualNode = mainNode;
    for( int i = N - 1; i > 0; i-- )
        atualNode = init_Node(atualNode, i);
    mainNode->next = atualNode; 
    return atualNode;
}

void print_List(Node* n, int N) {
    Node* aux = n;

    do {
        printf("%d\n", aux->value);
        aux = aux->next;
    } while(aux != n);
}

void remove_Node(Node* rmvN, Node* antN) {
    Node* nextN = rmvN->next;
    Node* auxN = rmvN;

    antN->next = nextN;
    free(auxN);
}

void kill_Josephus(Node* mainNo, int N, int M) {
    int k = 1;
    int j = 0;
    Node* auxNo = mainNo;

    while(k < N) {
        while(j < M - 1) {
            auxNo = auxNo->next;
            j++;
        }
        remove_Node(auxNo->next, auxNo);
        auxNo = auxNo->next;
        j = 0;
        k ++;
    }
}