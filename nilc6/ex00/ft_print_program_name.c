/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilinc <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:23:38 by nkilinc           #+#    #+#             */
/*   Updated: 2023/08/02 12:29:01 by nkilinc          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	while (av[0][i] != '\0' && ac)
	{
		ft_putchar(av[0][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
