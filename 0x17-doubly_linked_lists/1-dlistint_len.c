#include <stddef.h>

typedef struct dlistint_s 
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t dlistint_len(const dlistint_t *h) {
    size_t count = 0; 

    while (h != NULL) {
        count++;
        h = h->next;
    }

    return count;
}
