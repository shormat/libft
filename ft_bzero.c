
#include "libft.h"

void	ft_bzero(void *s, int n)
{
	if (n <= 0)
		return ;
	ft_memset(s, 0, n);
}
