/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:47:48 by abaltaza          #+#    #+#             */
/*   Updated: 2022/11/11 16:53:34 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Explanation
The isalnum() function checks wheter the argument passed is an alphanumeric character (alphabet or number) or not )

isalnum() Parameters
argument - a character

isalnum() Return  Value
- Returns 1 if argument is an alphanumeric character
- Returns 0 if argument is neither an alphabet nor a digit

*/

#include "libft.h"

int    ft_isalnum(int a)
{
    if((a >= '0' && a <= '9') || ((a >= 'A' && a <= 'Z')
            || (a >= 'a' && a <= 'z')))
        return (1);
    return (0);
}