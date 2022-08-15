/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:53:26 by mobushi           #+#    #+#             */
/*   Updated: 2022/06/10 20:19:29 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	tmp = (char *)malloc(i + 1);
	if (tmp == NULL)
		return (NULL);
	while (j < i)
	{
		tmp[j] = s1[j];
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}
