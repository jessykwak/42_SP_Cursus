#include <unistd.h>
#include <fcntl.h>

void read_file(char *filename)
{
    int path_name;
    int read_size;
    char buffer[500];

    path_name = open(filename, O_RDONLY);
    if (path_name == -1)
    {
        write(2, "Error: Failed to open file\n", 28);
        return;
    }
    while ((read_size = read(path_name, buffer, sizeof(buffer))) > 0)
    {
        write(1, buffer, read_size);
    }
    if (read_size == -1)
    {
        close(path_name);
        write(2, "Error: Failed to read file\n", 28);
        return;
    }
    close(path_name);
    write(1, "\n", 1);
}
