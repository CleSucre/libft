/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:40:46 by jthomas           #+#    #+#             */
/*   Updated: 2022/11/11 05:43:26 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
    int	i;
    int	count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            count++;
            while (s[i] != c && s[i])
                i++;
        }
        else
            i++;
    }
    return (count);
}

void    ft_free(char **tab, int i)
{
    while (i >= 0)
        free(tab[i--]);
    free(tab);
}

char    **ft_split(char const *s, char c)
{
    char	**res;
    int		size;
    int		i;
    int		ii;
    int		start;

    size = ft_count_words(s, c);
    res = (char **)malloc(sizeof(char *) * (size + 1));
    if (!res)
        return (NULL);
    i = 0;
    ii = 0;
    while (size-- > 0)
    {
        while (s[i] == c)
            i++;
        start = i;
        while (s[i] != c || !s[i])
            i++;
        res[ii++] = ft_substr(s, start, i - start);
        if (!res[ii - 1])
        {
            ft_free(res, ii - 1);
            return (NULL);
        }
    }
    res[ii] = NULL;
    return (res);
}