/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepaloma <pepaloma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:57:34 by pepaloma          #+#    #+#             */
/*   Updated: 2024/03/09 11:17:50 by pepaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number(char *s)
{
	int	n;

	n = 0;
	while (ft_isdigit(*s))
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	return (n);
}

static int	count_spaces(char *s)
{
	int	i;

	i = 0;
	while (*s == ' ' || *s == '\t' || *s == '\v'
		|| *s == '\f' || *s == '\r' || *s == '\n')
	{
		i++;
		s++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	str += count_spaces((char *)str);
	if (*str == '-')
		return (get_number((char *)str + 1) * -1);
	if (*str == '+')
		return (get_number((char *)str + 1));
	return (get_number((char *)str));
}

/* int	main(void)
{
	const char	*str = "0";
	int			n;

	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	printf("%d\n", n);
	return (0);
} */
