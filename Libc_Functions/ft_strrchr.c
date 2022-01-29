/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimcuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:24:28 by jlimcuan          #+#    #+#             */
/*   Updated: 2022/01/29 18:36:42 by jlimcuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*in;

	*in = s;
	i = ft_strlen(s);
	s = s + i;
	while (*s != *in && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
