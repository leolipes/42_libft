/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolipes <leolipes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:56:51 by leolipes          #+#    #+#             */
/*   Updated: 2021/08/03 13:27:19 by leolipes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

	#include <unistd.h>
	#include <stdlib.h>

	void	ft_bzero(void *str, size_t n);
	int	ft_isalnum(int c);
	int	ft_isalpha(int c);
	int	ft_isascii(int c);
	int	ft_isdigit(int c);
	int	ft_isprint(int c);
	void	*ft_memcpy(void *dest, const void *src, size_t n);
	void	*ft_memmove(void *dest, const void *src, size_t n);
	void	*ft_memset(void *str, int c, size_t n);
	size_t	ft_strlcpy(char *dest, const char *src, size_t size);
	size_t	ft_strlen(const char *str);

#endif
