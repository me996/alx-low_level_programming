#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {
if (array == NULL){
    return -1;
}

for (size_t i = 0; i < size; ++i) {
printf("comparing %d to %d\n", array[i], value);
if (array[i] == value) {
    return i;
}
}
return -1;
}
