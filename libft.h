/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:41:07 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/17 16:22:26 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>

int		ft_isalpha(char c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *str);
void	ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *s, size_t n);
void	ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_memmove(void *dest, const void *src, size_t n);

#endif