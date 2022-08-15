/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:28:22 by mobushi           #+#    #+#             */
/*   Updated: 2022/06/13 00:12:11 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	if (buf1 == buf2)
		return (buf1);
	tmp1 = (unsigned char *)buf1;
	tmp2 = (unsigned char *)buf2;
	while (n > 0)
	{
		*tmp1++ = *tmp2++;
		n--;
	}
	return (buf1);
}
