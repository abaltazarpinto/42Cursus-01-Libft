/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:51:33 by abaltaza          #+#    #+#             */
/*   Updated: 2022/11/11 16:53:34 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: alphabetic character test
**
** DESCRIPTION:
** 		The isalpha() function tests for any character for which isupper(3) or
**	islower(3) is true.
*/

#include "libft.h"

int    ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
        return (1);
    return (0);
}