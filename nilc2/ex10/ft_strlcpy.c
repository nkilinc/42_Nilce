/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilinc <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 03:04:57 by nkilinc           #+#    #+#             */
/*   Updated: 2023/07/26 05:58:32 by nkilinc          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	m;

	m = ft_strlen(src);
	n = 0;
	if (size != 0)
	{
		while ((src[n] != '\0') && (n < size -1))
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	return (m);
}
