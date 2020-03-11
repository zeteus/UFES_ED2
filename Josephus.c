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

    for( int i = 0; i < N; i++ ) {
        printf("%d\n", aux->value);
        aux = aux->next;
    }
}

void remove_Node(Node* n) {
    return;
}