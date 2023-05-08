/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:16:09 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/08 17:30:10 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dupped;

	i = 0;
	dupped = (char *) malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (!dupped)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		dupped[i] = s[i];
		i++;
	}
	dupped[i] = '\0';
	return (dupped);
}

int	main(void)
{
	printf("%s", ft_strdup("dup testiuhasdhuisfda"));
}