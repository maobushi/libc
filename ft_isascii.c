/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:58:21 by mobushi           #+#    #+#             */
/*   Updated: 2022/04/09 20:17:06 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* 
int main(void)
{
	for (int i = 0; i < 1200; ++i)
	{
	if(ft_isascii(i) != isascii(i))
	{
			printf("Wrong!:%d\n",i);
	}
	printf("%d",isascii(i));
}
} */