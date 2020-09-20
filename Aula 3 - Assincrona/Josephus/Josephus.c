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
    return mainNode;
}

void print_List(Node* n) {
    Node* aux = n;

    do {
        printf("%d\n", aux->value);
        aux = aux->next;
    } while(aux != n);
}

void remove_Node(Node* rmvN, Node* antN) {
    Node* nextN = rmvN->next;
    antN->next = nextN;
    free(rmvN);
}

int kill_Josephus(Node* mainNo, int N, int M) {
    int k = 1;

    while(k < N) {
        for(int j = 0; j < M - 1; j++) mainNo = mainNo->next;
        remove_Node(mainNo->next, mainNo);
        k ++;
    }

    return mainNo->value;
}