/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:54:22 by abaltaza          #+#    #+#             */
/*   Updated: 2022/11/11 17:00:41 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Description
The function takes a single argument. 
    -ch - a character
    Return value from toupper()

    If an argument passed to toupper() is

    a lowercase character, the function returns its corresponding uppercase character
    an uppercase character or a non-alphabetic character, the function the character itself

*/
int     ft_toupper(int a)
{
    if ((a >= 'a' && a <= 'z'))
    {
        return (a - 32);
    }
    else
        return(a)

}