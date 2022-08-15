/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:53:50 by mobushi           #+#    #+#             */
/*   Updated: 2022/06/13 00:12:26 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)buf1;
	tmp2 = (unsigned char *)buf2;
	if (n == 0 || buf1 == buf2)
		return (buf1);
	if (buf1 <= buf2)
	{
		return (ft_memcpy(tmp1, tmp2, n));
	}
	else
	{
		while (n >= 1)
		{
			tmp1[n - 1] = tmp2[n - 1];
			n--;
		}
		return (buf1);
	}
}
