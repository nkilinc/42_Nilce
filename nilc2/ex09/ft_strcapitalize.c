/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilinc <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 02:21:31 by nkilinc           #+#    #+#             */
/*   Updated: 2023/07/26 06:23:28 by nkilinc          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= 'A') && (str[n] <= 'Z'))
		{
			str[n] += 32;
		}
		n++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	m;

	i = 0;
	m = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (m == 1)
				str[i] -= 32;
			m = 0;
		}
		else if ((str[i] >= '0') && (str[i] <= '9'))
			m = 0;
		else
			m = 1;
		i++;
	}
	return (str);
}
