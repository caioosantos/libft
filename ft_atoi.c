/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <cbrito-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:35:25 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/10/29 14:00:09 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const char	*caractere_special(const char *str, int *digit)
{
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*digit *= -1;
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int	digit;
	int	result;

	digit = 1;
	result = 0;
	str = caractere_special(str, &digit);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * digit);
}
