#ifndef _JOSEPHUS_H
#define _JOSEPHUS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

Node* init_Node(Node* n, int value);

Node* init_List(int N);

void print_List(Node* n);

void remove_Node(Node* rmvN, Node* antN);

int kill_Josephus(Node* mainNo, int N, int M);


#endif /*_JOSEPHUS_H */