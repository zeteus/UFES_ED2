#ifndef BOTTOM_UP_H
#define BOTTOM_UP_H

#include <stdlib.h>
#include "item.h"

void sort(Item *a, int lo, int hi);
void merge(Item *a, Item *aux, int lo, int mid, int hi);

#endif /*BOTTOM_UP_H*/