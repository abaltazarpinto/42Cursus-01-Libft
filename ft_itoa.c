/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:17:31 by abaltaza          #+#    #+#             */
/*   Updated: 2022/11/16 15:17:31 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Objetif: turn ints to char
/* handle with negatives and return -1 norminette obligations
A static int variable remain in memory while the program is running. A normal or auto variable is destroyed when a function call where the 
variable was decalared is over. For example, we can use static int to count a number of times a function is called, but an auto variable can't be used for this purpose. 
*/


static int minus(int n)
{
    if ( n < 0 )
        return (-n);
    return (n);
}

static int size(int n)
{
    int   len;

    len = 0;
    if (n <= 0)
        ++len;
    while (n!= 0)
    {
        ++len;
        n = n / 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char *res;
    int         len;

    len = size(n);
    res = malloc(sizeof(char) * (len + 1));
    if (res == NULL)
        return (NULL);
    res[len] = '\0';
    if (n < 0)
        res[0] = '-'
    else if ( n == 0 )
        res[0] = '0';
    while ( n != 0 )
    {
        --len;
        res[len] = minus(n % 10) + 48;
        n = n / 10;
    }
    return (res);
}

/*int	main(void)
{
	printf("Return: %s\n", ft_itoa(123456789));
	printf("Return: %s\n", ft_itoa(0001057));
	printf("Return: %s\n", ft_itoa(-123456789));
	printf("Return: %s\n", ft_itoa(-000167));
	return (0);
}*/