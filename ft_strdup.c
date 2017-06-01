/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnetshik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 07:31:44 by dnetshik          #+#    #+#             */
/*   Updated: 2017/05/31 13:00:59 by dnetshik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *sc)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char*)malloc(sizeof(*str) * (ft_strlen(sc) + 1))))
		return (NULL);
	while (i < ft_strlen(sc))
	{
		str[i] = sc[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
