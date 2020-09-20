#include "Sieve.h"

Node* init_Node(Node* proxN, int value) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->value = value;
    node->prime = 's';
    node->next = proxN;
    return node;
}

Node* init_List(int N) {
    Node* mainNode = init_Node(NULL, 2);
    Node* atualNode = mainNode;

    for(int i = 1; i < N; i++) {
        atualNode->next = init_Node(NULL, i + 2);
        atualNode = atualNode->next;
    }

    return mainNode;
}

void print_List(Node* node, int N) {
    Node* aux = node;

    for(int i = 0; i < N; i++) {
        printf("%d\n", aux->value);
        printf("%c\n", aux->prime);
        printf("------\n");
        aux = aux->next;
    }
}

void remove_List(Node* mainNode) {
    while(mainNode != NULL) {
        Node* rmvNode = mainNode;
        mainNode = mainNode->next;
        free(rmvNode);
    }
}

int is_Multiple(int n1, int n2) {
    int restofdiv = n2%n1;
    
    if(restofdiv == 0)
        return 1;
    else
        return 0;
}

void mark_prime(Node* list) {
    int i = list->value;
    Node* aux = list;

    while(aux != NULL) {
        if(aux->value == i) {
            aux = aux->next;
        }
        else {
            if(is_Multiple(i, aux->value)) {
                aux->prime = 'n';
                aux = aux->next;
            }
            else {
                aux = aux->next;
            }
        }
    }
}

Node* next_prime(Node* list) {
    while(list != NULL && list->prime == 'n') {
        list = list->next;
    }
    return list;
}

void count_prime(Node* list) {
    int i = 0;
    
    while(list != NULL) {
        Node* node = list;
        if(node->prime == 's')
            i++;
        list = list->next;
    }
}