/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cress <cress@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:28:01 by amonteag          #+#    #+#             */
/*   Updated: 2025/07/08 18:50:21 by cress            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	str1[] = "Hola";
	char	str2[] = "hola";
	
	printf("%d", ft_strcmp(str1, str2));
}
*/
