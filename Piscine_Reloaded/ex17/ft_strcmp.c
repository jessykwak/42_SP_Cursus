int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return (*s1-*s2);
        s1++;
        s2++;
    }
    return (*s1-*s2);
}

#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[] = "apple";
    char str2[] = "orange";

    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", ft_strcmp(str1, str2));

    return 0;
}