#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	index;

	while (s[len] != '\0')
		len++;
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		dup[index] = s[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}

/* #include <stdio.h>

int	main(void) {
	const char *str1 = "Noice, Toit";
	char *dup = ft_strdup(str1);

	if (dup != NULL)
	{
		printf("Source: %s\n", str1);
		printf("Duplicate: %s\n", dup);
		free(dup);
	} else
	{
		printf("Memory allocation failed!\n");
	}

	return (0);
} */