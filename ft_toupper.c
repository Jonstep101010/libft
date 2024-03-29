/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:38:44 by jschwabe          #+#    #+#             */
/*   Updated: 2023/05/29 14:34:12 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief converts ascii alphabet values to uppercase (ascii value)
 * @param ch value of character
 * @return value, whether modified or not
 */
int	ft_toupper(int ch)
{
	if (ch > 96 && ch < 123)
		ch -= 32;
	return (ch);
}
