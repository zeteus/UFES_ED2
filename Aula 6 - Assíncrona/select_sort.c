#include "select_sort.h"

void sort(Item *a, int lo, int hi) {
    for(int i = 0; i < hi-1; i++) {
        int min = i;
        for(int j = i+1; j < hi; j++) {
            if(less(a[j], a[min])) min = j;
        }
        exch(a[i], a[min]);
    }
}