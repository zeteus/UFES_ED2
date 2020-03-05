#include "UF.h"

UF UF_init(int size) {
    uf->N = size;
    UF uf = (UF) malloc(sizeof(*UF));
    uf->id = (*int) malloc(N * sizeof(int));
    uf->sz = (*int) malloc(N * sizeof(int));
    for(int i = 0; i < N; i++) {uf->id[i] = i};
    for(int i = 0; i < N; i++) {uf->sz[i] = 1};
    return uf;
}

int UF_find(UF uf, int p) {
    return 0;
}

int UF_conected(UF uf, int p, int q) {
    return 0;
}

void UF_union(UF uf, int p, int q) {
    
}

void UF_free(UR uf) {

}