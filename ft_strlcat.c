/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:43:27 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/17 16:29:51 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest,const char *src, size_t n)
{
    size_t i;
    size_t x;
    size_t len_total;
    
	i = ft_strlen(dest);
	x = 0;
	len_total = ft_strlen(dest) + ft_strlen(src);
    if(n == 0)
        return(0);
    // while(i < n-1 || dest[i] != '\0')
    //     i++;
    while(i < n-1 && src[x] != '\0')
    {
        dest[i++] = src[x++];
    }
    return (len_total);    
}

int main()
{
	char dest[20] = "hola";
	const char *src;
	size_t n;
	src = ", mundo";
	n = 5;
	
	printf("%zu\n %s\n", ft_strlcat(dest, src, n), dest);
}