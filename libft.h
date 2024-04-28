
#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int ft_atoi(char *c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
void *ft_memset(void *b, int c, int len);
void ft_bzero(void *s, int n);
void *ft_memcpy(void *dst, void *src, size_t n);
void *ft_memmove(void *dst, void *src, size_t len);
int ft_strlen(char *s);
char *ft_strchr(char *s, int c);
char *ft_strrchr(char *s, int c);
int ft_strncmp(char *s1, char *s2, size_t n);
char *ft_strstr(char *haystack, char *needle);
int ft_strcmp(char *s1, char *s2);
char *ft_strcpy(char *dst, char *src);
char *ft_strncpy(char *dst, char *src, int len);
char *ft_strdup(char *s);
char *ft_strcat(char *s1, char *s2);
int	ft_toupper(int c);
int ft_tolower(int c);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strlcat(char *dst, char *src, unsigned int size);
void *ft_memchr(void *s, int c, size_t n);
int ft_memcmp(void *s1, void *s2, size_t n);
char *ft_strnstr(char *haystack, char *needle, size_t len);
void *ft_calloc(size_t count, size_t size);


#endif
