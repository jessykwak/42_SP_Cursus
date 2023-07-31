#include <stdlib.h>

int ft_atoi(const char *nptr)
{
	int	index;
	int	sign;
	int	num;

	sign = 1;
	index = 0;
    if (nptr[0] == '\0')
    {
        return (0);
    }
	while (!(nptr[index] == '+') && !(nptr[index] == '-') 
            && !(nptr[index] >= '0' && nptr[index] <= '9'))
		index++;
	num = 0;
	while (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign = sign * (-1);
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		num = (num * 10) + (nptr[index] - '0');
		index++;
	}
	return (num * sign);
}

#include <stdio.h>

int main()
{
    const char *str = "214748364981";

    printf("Converted integer: %d\n", ft_atoi(str));

    return (0);
}