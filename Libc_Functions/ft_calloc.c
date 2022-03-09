/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimcuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:25:10 by jlimcuan          #+#    #+#             */
/*   Updated: 2022/03/09 16:29:04 by jlimcuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*st;

	tot_size = size * count;
	if (! (st = malloc(tot_size)))
		return (0);
	ft_memset(st, 0, tot_size);
	return (st);
}
