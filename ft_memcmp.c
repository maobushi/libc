/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:23:02 by mobushi           #+#    #+#             */
/*   Updated: 2022/06/11 00:49:42 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *buf1, const void *buf2, size_t n)

{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)buf1;
	tmp2 = (unsigned char *)buf2;
	i = 0;
	while (i++ < n)
	{
		if (*tmp1 != *tmp2)
		{
			return (*tmp1 - *tmp2);
		}
		tmp1++;
		tmp2++;
	}
	return (0);
}
