#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <stdlib.h>
#include "item.h"

void sort(Item *a, int lo, int hi);
void merge_sort(Item *a, Item *aux, int lo, int hi);
void merge(Item *a, Item *aux, int lo, int mid, int hi);

#endif /*MERGE_SORT_H*/