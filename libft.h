/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:00:22 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/12 15:47:22 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* 
  Reimplementation of C original functions. 
*/

/**********************************************
    Functions that check the validity
**********************************************/

/* Check if alphabetic */
int		ft_isalpha(int c);

/* Check if digit */
int		ft_isdigit(int c);

/* Check if alphanumeric */
int		ft_isalnum(int c);

/* Check if ASCII */
int		ft_isascii(int c);

/* Check if printable */
int		ft_isprint(int c);

/**********************************************
    Functions that handle pointers/memory area
**********************************************/

/* Returns the length of the given null-terminated string */
int		ft_strlen(const char *s);

/*
  Fills the first n bytes of the memory area 
  pointed to s with the constant byte c
*/
void	*ft_memset(void *s, int c, int n);

/* Sets the first n bytes of the memory area pointed to s to zero */
void	ft_bzero(void *s, int n);

/*
  Copies n bytes from memory area src to memory area dest
*/
void	*ft_memcpy(void *dest, const void *src, int n);

/*
  Copies n bytes from memory area src to memory area dest.
  The memory areas may overlap
*/
void	*ft_memmove(void *dest, const void *src, int n);

/*
  Copies src to string dest of size destsize. 
  If src is longer than destsize, it will be truncated
  and dest will always be null-terminated
  returns total length of the string it tried to create
*/
int		ft_strlcpy(char *dest, const char *src, int destsize);

/*
  Appends src to string dest of size destsize.
  It will append at most dstsize - strlen(dest) - 1 bytes.
  and dest will always be null-terminated
  returns total length of the string it tried to create
*/
int		ft_strlcat(char *dest, const char *src, int destsize);

/* Returns pointer to first occurrence of c in s, or NULL if not found */
char	*ft_strchr(const char *s, int c);

/* Returns pointer to last occurrence of c in s, or NULL if not found */
char	*ft_strrchr(const char *s, int c);

/* Compares at most n characters of s1 and s2 */
int		ft_strncmp(const char *s1, const char *s2, int n);

/* Scans memory for c, returns pointer to first occurrence or NULL */
void	*ft_memchr(const void *s, int c, int n);

/* Compares n bytes of memory at s1 and s2 */
int		ft_memcmp(const void *s1, const void *s2, int n);

/* Searches for the first occurrence of the
 substring needle in the string haystack */
char	*ft_strnstr(const char *haystack, const char *needle, int len);

/* Converts string to int */
int		ft_atoi(const char *nptr);

/******************************************
    Functions that convert letters
******************************************/

/* Converts lowercase letter to uppercase */
int		ft_toupper(int c);

/* Converts uppercase letter to lowercase */
int		ft_tolower(int c);

/******************************************
    Functions that allocate memory 
******************************************/

/* Allocates memory for an array of n elements, each of size bytes,
 and returns a pointer to the allocated memory */
void	*ft_calloc(int nmemb, int size);

/* Allocates sufficient memory for a copy of the string s,
 does the copy, and returns a pointer to it */
char	*ft_strdup(const char *s);

#endif