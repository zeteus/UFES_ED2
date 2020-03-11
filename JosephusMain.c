#include "Josephus.h"

int main(char argc, char** argv) {
    Node* no;
    int N = atoi(argv[1]);
    int M = atoi(argv[2]);

    no = init_List(N);
    print_List(no, N);
    return 0;
}