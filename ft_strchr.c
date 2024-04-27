
#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	char *occurence;

	occurence = 0;
	
	while (*s)
	{
		if (*s == c)
		{
			occurence = s;
			break;
		}
		s++;
	}

	return (occurence);
}
