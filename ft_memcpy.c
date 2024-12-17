/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:12:17 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/15 17:24:28 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *f, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !f)
		return (1);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)f)[i];
		i++;
	}
	return (dest);
}
