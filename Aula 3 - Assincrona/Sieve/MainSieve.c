#include "Sieve.h"

int N = 10;

int main() {
    Node* node;

    //Criando a lista de 2 até N
    node = init_List(N);
    while(node != NULL){
        mark_prime(node);
        node = next_prime(node->next);
    }
    print_List(node, N);

    //Liberando a lista
    remove_List(node);

    return 0;
}