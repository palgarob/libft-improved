/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepaloma <pepaloma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:28:55 by pepaloma          #+#    #+#             */
/*   Updated: 2024/03/19 11:11:34 by pepaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_splitlen(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}
