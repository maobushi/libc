/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:17:30 by mobushi           #+#    #+#             */
/*   Updated: 2022/06/13 00:33:56 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*tmp;

	i = ft_strlen(s);
	tmp = s;
	while (i > 0)
	{
		if (tmp[i] == (char)c)
			return ((char *)&tmp[i]);
		i--;
	}
	if (tmp[i] == (char)c)
		return ((char *)&tmp[i]);
	return (NULL);
}
