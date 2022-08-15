/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:17:16 by mobushi           #+#    #+#             */
/*   Updated: 2022/06/10 20:32:07 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*buf1;

	ch = (unsigned char)ch;
	buf1 = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (*buf1 == ch)
			return ((void *)buf1);
		buf1++;
		i++;
	}
	return (0);
}
