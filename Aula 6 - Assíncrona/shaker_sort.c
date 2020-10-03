#include "shaker_sort.h"

void sort(Item *a, int lo, int hi) {
    for (int i = 0; i < hi/2; i++) {
        int done = 0;
        for (int j = i; j < hi - i - 1; j++) {
            if (a[j] > a[j+1]) {
                exch(a[j], a[j+1]);
                done = 1;
            }
        }
        for (int j = hi - 2 - i; j > i; j--) {
            if (a[j] < a[j-1]) {
                exch(a[j], a[j-1]);
                done = 1;
            }
        }
        if(!done) break;
    }
}