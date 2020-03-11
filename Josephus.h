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

void print_List(Node* n, int N);

void remove_Node(Node* n);

#endif /*_JOSEPHUS_H */