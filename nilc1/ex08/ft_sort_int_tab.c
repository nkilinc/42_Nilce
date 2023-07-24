/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilinc <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:12:08 by nkilinc           #+#    #+#             */
/*   Updated: 2023/07/24 09:35:41 by nkilinc          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	m;
	int	rev;
	int	a;

	n = 0;
	m = size - 1;
	a = 1 + n;
	while (n < m)
	{
		if (tab[n] > tab[a])
		{
			rev = tab[a];
			tab[n] = tab[a];
			tab[a] = rev;
		}
		n++;
		a++;
	}
}
