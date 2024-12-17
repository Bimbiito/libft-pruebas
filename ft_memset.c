/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:50:30 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/15 17:16:47 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = (unsigned char *)ptr;
	val = (unsigned char *)value;
	i = 0;
	while (i < num)
	{
		p[i] = val;
		i++;
	}
	return (ptr);
}
