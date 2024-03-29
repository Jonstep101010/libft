/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:51:00 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/22 20:44:32 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief find character in string
 *
 * @param str string to search
 * @param c character to find
 * @return char* pointer to char c (if found), otherwise 0
 */
char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = -1;
	while (++i <= ft_strlen(str))
		if (str[i] == (unsigned char) c)
			return ((char *)&str[i]);
	return (NULL);
}
