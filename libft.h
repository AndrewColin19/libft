/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:22:37 by acolin            #+#    #+#             */
/*   Updated: 2021/10/07 14:22:37 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>

void	*ft_memset(void *s, int c, size_t n); //ok
void	ft_bzero(void *s, size_t n);

size_t	ft_strlen(const char *s); //ok
int		ft_isalpha(int c); //ok
int		ft_isdigit(int c); //ok
int		ft_isalnum(int c); //ok
int		ft_isascii(int c); //ok 
int		ft_isprint(int c); //ok
int		ft_toupper(int c); //ok
int		ft_tolower(int c); //ok
char	*ft_strchr(const char *s, int c); //ok
char	*ft_strrchr(const char *s, int c); //ok
int		ft_strncmp(const char *s1, const char *s2, size_t n); //ok
size_t	ft_strlcpy(char *dst, const char *src, size_t size); //ok
size_t	ft_strlcat(char *dst, const char *src, size_t size); //ok
char	*strnstr(const char *s1, const char *s2, size_t len); //ok

int		ft_atoi(const char *pnbr); //ok

void	ft_putchar_fd(char c, int fd); //ok
void	ft_putstr_fd(char *s, int fd); //ok
void	ft_putendl_fd(char *s, int fd); //ok
void	ft_putnbr_fd(int n, int fd); //ok

int		ft_islower(int c); //ok
int		ft_isupper(int c); //ok
int		ft_isspace(int c); //ok

#endif