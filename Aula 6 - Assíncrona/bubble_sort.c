#include "bubble_sort.h"

Item* bubble_sort(Item* a, int N) {
    for (int i = N-1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            compexch(a[j], a[j+1]);
        }
    }
}