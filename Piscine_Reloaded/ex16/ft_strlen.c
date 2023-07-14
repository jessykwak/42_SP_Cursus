int ft_strlen(char *str)
{
    int index;

    index = 0;
    while (*str)
    {
        index++;
        str++;
    }
    return (index);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello, world!";

    printf("Length of the string: %ld\n", strlen(str));
    printf ("Length of the string: %d\n", ft_strlen(str));
    return (0);
}