#include "select_sort.h"

Item* select_sort(Item* a, int N) {
    for(int i = 0; i < N; i++) {
        Item m = a[i];
        for(int j = i; j < N; j++) {
            if(less(a[j], m)) m = a[j];
        }
        exch(a[i], m);
    }
    return a;
}