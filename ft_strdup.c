/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:31:29 by mel-hajj          #+#    #+#             */
/*   Updated: 2024/11/10 20:18:37 by mel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*x;
	size_t	l;

	l = ft_strlen(s);
	x = malloc(l + 1);
	if (!x)
		return (0);
	ft_memcpy(x, s, l + 1);
	return (x);
}