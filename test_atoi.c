/*
 * =====================================================================================
 *
 *       Filename:  test_atoi.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22.04.2024 21:27:30
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

int main(int argc, char **argv)
{
    char tests[9][10] = {"123", "+123", "++123", "+-+123", "---123", "--123", "+++++123", "-----123", "-124"};

    for(int i = 0; i < 9; i++)
    {
        printf("[%d] - %s - %d -- %d \n", i, tests[i], atoi(tests[i]), ft_atoi(tests[i]));
        assert(atoi(tests[i]) == ft_atoi(tests[i]));
    }


    return 0;
}
