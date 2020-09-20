#include "Sieve.h"

int N = 1000;

int main() {
    Node* root;

    //Criando a lista de 2 até N
    root = init_List(N);
    Node* aux = root;
    
    while(aux != NULL){
        mark_prime(aux);
        // printf("%i\n", aux->value);
        aux = next_prime(aux->next);
        // printf("%i\n", aux->value);
    }
    print_List(root, N);

    //Liberando a lista
    remove_List(root);

    return 0;
}