#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int index;
    int param;

    index = 0;
    param = 1;
    if (argc <= 1)
        return (1);
    while (param+1 <= argc)
    {
        if (*argv[param] - *argv[param+1])
        {

        }
    }
    return (0);
}