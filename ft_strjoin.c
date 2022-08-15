/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:34:04 by mobushi           #+#    #+#             */
/*   Updated: 2022/06/10 20:55:11 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * (i + j + 1));
	if (tmp == NULL)
		return (NULL);
	while (k < i)
	{
		tmp[k] = ((char *)s1)[k];
		k++;
	}
	while (k < i + j)
	{
		tmp[k] = ((char *)s2)[k - i];
		k++;
	}
	tmp[k] = '\0';
	return (tmp);
}
