/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:55:45 by capeinad          #+#    #+#             */
/*   Updated: 2026/01/03 17:37:18 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>
# include <stdint.h>

void			*ft_memset(void *s, int c, size_t n);
int				ft_atoi(const char *nptr);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
int				ft_isnum(char *num);
int				ft_isascii(int c);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
size_t			ft_strlen(const char *str);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little,
					unsigned int len);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char			*ft_strdup(const char *s);
void			*ft_calloc(size_t count, size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			**ft_split(const char *s, char sep);
char			*ft_itoa(int n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

// # bonus
typedef struct t_num_list
{
	int					value;
	int					index;
	struct t_num_list	*next;
}						t_num_list;

t_num_list		*ft_lstnew(int value);
void			ft_lstadd_front(t_num_list **lst, t_num_list *new);
int				ft_lstsize(t_num_list *lst);
t_num_list		*ft_lstlast(t_num_list *lst);
void			ft_lstadd_back(t_num_list **lst, t_num_list *new);
void			ft_lstdelone(t_num_list *lst);
void			ft_lstclear(t_num_list **lst);

#endif
