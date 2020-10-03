#include "insert_sort.h"

void sort(Item *a, int lo, int hi) {
    for(int i = 1; i < hi; i++) {
        int key = a[i];
        int j = i-1;

        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}