/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:08:02 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 17:30:01 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <unistd.h>
# include <stdlib.h>

typedef struct s_vr
{
	char	*buffer;
	ssize_t	byt;
	ssize_t	mlen1;
	ssize_t	mlen2;
	size_t	i;
	size_t	a;
}	t_vr;

char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin_g(char const *s1, char const *s2);
void	g_free_l(char **s1, char **s2, char **s3);
size_t	ft_strlen(const char *s);

#endif