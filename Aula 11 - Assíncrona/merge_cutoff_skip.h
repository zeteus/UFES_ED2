#ifndef MERGE_CUTOFF_SKIP_H
#define MERGE_CUTOFF_SKIP_H

#include <stdlib.h>
#include "item.h"
#include "insert_sort.h"

void sort(Item *a, int lo, int hi);
void merge_sort(Item *a, Item *aux, int lo, int hi);
void merge(Item *a, Item *aux, int lo, int mid, int hi);

#endif /*MERGE_CUTOFF_SKIP_H*/