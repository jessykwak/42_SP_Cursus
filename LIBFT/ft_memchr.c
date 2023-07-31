#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *str;
    unsigned char   search;
    size_t  count;

    str = ((unsigned char *)s);
    search = ((unsigned char)c);
    count = 0;
    while (str[count] != '\0' && (count < n))
    {
        if (str[count] == search)
            break;
        count++;
    }
    if (str[count] != search)
        return (NULL);
    return (&str[count]);
}

#include <stdio.h>

int main (void)
{
    const char  *str;

    str = "Monkey's banana!";
    printf("%p\n", ft_memchr(str, 'H', 16));
    printf("%p\n", memchr(str, 'H', 16));
}