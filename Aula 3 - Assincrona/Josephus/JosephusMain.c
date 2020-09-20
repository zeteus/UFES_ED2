#include "Josephus.h"

int main(char argc, char** argv) {
    Node* no;
    int N = atoi(argv[1]);
    int M = atoi(argv[2]);

    // Inicia a lista circular
    no = init_List(N);

    // Libera cada célula de M em M
    int leader = kill_Josephus(no, N, M);
    // Printa o líder
    printf("%i\n", leader);
    // Libera o último nó
    free(no);
    return 0;
}