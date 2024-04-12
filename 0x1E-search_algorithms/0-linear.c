#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * of integers using linear search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for
 *
 * Return: If the value is not present or the array is NULL, -1.
 *  Otherwise, the first index where the value  is located.
 */
int linear_search(int *array, size_t size, int value)
if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;  // Value not found
}

int main(void) {
    int array[] = { 10, 1, 42, 3, 4, 42, 6, 7, -1, 9 };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));

    return 0;
}

