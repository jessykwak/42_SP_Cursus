void    ft_foreach(int *tab, int length, void(*f)(int))
{
    int index;

    index = 0;
    while (index < length) 
    {
        f(tab[index]);
        index++;
    }
}

#include <stdio.h>

void ft_putnbr(int num) 
{
    printf("%d ", num);
}

int main() 
{
    int tab[] = {1, 2, 3, 4, 5};
    int length;

    length = sizeof(tab) / sizeof(tab[0]);
    ft_foreach(tab, length, &ft_putnbr);

    return (0);
}