#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *array;
    unsigned char   *ptr;
    size_t  total;

    total = nmemb * size;
    array = malloc(nmemb*size);
    ptr = array;
    if (array == NULL)
        return (NULL);
    else
    {
        while (total > 0)
        {
            *ptr++ = 0;
            total--;
        }
    }
    return (array);
}

/* #include <stdio.h>

int main(void) 
{
    int num_elements = 0;
    int *array = (int *)ft_calloc(num_elements, sizeof(int));
    int index;

    if (array != NULL) 
    {
        while (index < num_elements)
        {
            printf("array[%d] = %d\n", index, array[index]);
            index++;
        }
        free(array);
    } 
    else 
    {
        printf("Memory allocation failed!\n");
    }

    return (0);
} */