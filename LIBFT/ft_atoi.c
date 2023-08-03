#include "libft.h"

int ft_atoi(const char *nptr)
{
	int index;
	int sign;
	int num;

	sign = 1;
	index = 0;
	if (nptr[0] == '\0')
	{
		return (0);
	}
	while (!(nptr[index] == '+') && !(nptr[index] == '-') && !(nptr[index] >= '0' && nptr[index] <= '9'))
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

/* int main(void)
{
	const char *str = "21474";
	int num;

	num = ft_atoi(str);
	printf("Converted integer: %d\n", num);

	return (0);
} */