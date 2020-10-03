#include "bubble_sort.h"

void sort(Item *a, int lo, int hi) {
    for (int i = hi-1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            compexch(a[j], a[j+1]);
        }
    }
}