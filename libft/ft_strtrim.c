/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azrig <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 04:41:54 by azrig             #+#    #+#             */
/*   Updated: 2024/11/17 04:41:54 by azrig            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
		if (s[i] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		slen;
	char	*trim;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	trim = (char *)s1;
	while (*trim && ft_search((char *)set, *trim))
		trim++;
	slen = ft_strlen(trim);
	while (slen && ft_search((char *)set, trim[slen - 1]))
		slen--;
	res = ft_substr(trim, 0, slen);
	if (!res)
		return (NULL);
	return (res);
}