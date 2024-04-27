
#include "libft.h"
#include <limits.h>

int ft_atoi(char *str)
{    
    int signe = 0;
    long long ret = 0;

    while(*str && *str == ' ')
        str++;

    while(*str && ( (*str == '-')||(*str=='+')||(*str >= '0' && *str <= '9')))
    {
        if(!signe && (*str == '+'))
            signe = 1;
        else if (!signe && (*str == '-'))
            signe = -1;
        else if(*str >= '0' && *str <= '9')
            ret = (ret * 10) + (*str - '0');
        else
            break;
        str++;
    }

    return ret * ((2*(signe >= 0))-1);
}

