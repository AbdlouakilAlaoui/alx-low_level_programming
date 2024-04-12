#include <stdio.h>
#include <stddef.h>

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high)
    {
        printf("Searching in array: ");
        for (size_t i = low; i <= high; i++)
        {
            if (i == low)
                printf("%d", array[i]);
            else
                printf(", %d", array[i]);
        }
        printf("\n");

        mid = (low + high) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main(void)
{
    int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, size, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));

    return 0;
}
