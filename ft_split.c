/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:16:54 by mobushi           #+#    #+#             */
/*   Updated: 2022/06/16 19:12:17 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(size_t count, char **output)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free (output[i]);
		i++;
	}
	free(output);
	return (NULL);
}

static int	ft_count_index(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;

	count = 0;
	i = 0;
	len = 0;
	while (1)
	{
		if ((s[i] == c || s[i] == '\0') && len > 0)
			count++;
		if (s[i] == '\0')
			break ;
		if (s[i] != c)
			len++;
		else
			len = 0;
		i++;
	}
	return (count);
}

static char	**ft_store_len(const char *s, char **copy, char c, size_t str_len)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (1)
	{
		if ((s[i] == c || s[i] == '\0') && str_len > 0)
		{
			copy[count] = malloc(sizeof(char) * (str_len + 1));
			if (copy[count] == NULL)
				return (ft_free(count, copy));
			ft_strlcpy(copy[count++], &s[i - str_len], str_len + 1);
		}
		if (s[i] == '\0')
			break ;
		if (s[i] != c)
			str_len++;
		else
			str_len = 0;
		i++;
	}
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**output;

	if (s == NULL)
		return (NULL);
	count = ft_count_index(s, c);
	output = (char **)malloc(sizeof(char *) * (count + 1));
	if (output == NULL)
		return (NULL);
	output = ft_store_len(s, output, c, 0);
	output[count] = NULL;
	return (output);
}
