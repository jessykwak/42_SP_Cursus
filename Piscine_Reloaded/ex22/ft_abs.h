#include <stdio.h>

#define ABS(x) ((x) < 0 ? ((-1)*(x)) : (x))

int main()
{
    int num = -5;
    printf("%d\n", num);
    printf("%d", ABS(num));
    return (0);
}
