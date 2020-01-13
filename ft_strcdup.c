/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:54:13 by cjover-n          #+#    #+#             */
/*   Updated: 2020/01/13 11:54:27 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcdup(const char *string, char delim)
{
	char	*ret;
	size_t	index;
	index = 0;
	ret = (char *)malloc(sizeof(char) * (ft_strlenc(string, delim) + 1));
	if (ret != NULL)
	{
		while (string[index] != delim)
		{
			ret[index] = string[index];
			index++;
		}
		ret[index] = '\0';
	}
	return (ret);
}
