#include <unistd.h>

void read_file(char *filename);

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        write(2, "File name missing.\n", 19);
        return (1);
    }
    else if (argc == 2)
    {
        read_file(argv[1]);
    }
    else
    {
        write(2, "Too many arguments.\n", 20);
        return (1);
    }
    return (0);
}
