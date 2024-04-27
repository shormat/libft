
#include "libft.h"

char *ft_strdup(char *s1)
{
    char *ret;
    int len;
    int i;

    i = 0;
    len = ft_strlen(s1);
    ret = malloc((len+1) * sizeof(char));
    
    if(!ret)
        return NULL;
    
    while(i < len)
    {
        ret[i] = s1[i];
        i++;
    }

    ret[i] = 0;

    return ret;
}
