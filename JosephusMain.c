#include "Josephus.h"

int main(char argc, char** argv) {
    Node* no;
    int N = atoi(argv[1]);
    int M = atoi(argv[2]);
    // printf("%d %d", N, M);
    no = init_List(N);
    // print_List(no, N);
    kill_Josephus(no, N, M);
    // remove_Node(no->next, no);
    print_List(no, N);
    free(no);
    return 0;
}