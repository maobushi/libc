/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:58:17 by mobushi           #+#    #+#             */
/*   Updated: 2022/06/13 22:20:28 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	ln;
	size_t		n;
	int			sign;

	sign = 1;
	ln = 0;
	n = 0;
	while (str[n] == 32 || (9 <= str[n] && str[n] <= 13))
		n++;
	if (str[n] == '-')
		sign *= -1;
	if (str[n] == '+' || str[n] == '-')
		n++;
	while ('0' <= str[n] && str[n] <= '9')
	{
		if (ln != ((ln * 10) + (str[n] - '0') * sign) / 10 && sign > 0)
			return ((int)LONG_MAX);
		if (ln != ((ln * 10) + (str[n] - '0') * sign) / 10 && sign < 0)
			return ((int)LONG_MIN);
		ln = (ln * 10) + (str[n] - '0') * sign;
		n++;
	}
	return ((int)ln);
}
