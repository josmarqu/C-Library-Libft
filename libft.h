/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:00:22 by josmarqu          #+#    #+#             */
/*   Updated: 2023/03/01 19:29:21 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h> 

/**********************************************
 * Check functions
 **********************************************/

/**
 * @brief Check if the character is alphabetic. 
 * 
 * @param c The character to check.
 * @return 1 if the character is alphabetic, 0 otherwise.
 */
int			ft_isalpha(int c);

/**
 * @brief Check if the character is a digit. 
 * 
 * @param c The character to check.
 * @return 1 if the character is a digit, 0 otherwise. 
 */
int			ft_isdigit(int c);

/**
 * @brief Check if the character is alphanumeric. 
 * 
 * @param c The character to check.
 * @return 1 if the character is alphanumeric, 0 otherwise.
 */
int			ft_isalnum(int c);

/**
 * @brief  Check if the character is an ASCII character in the range 0 to 127.
 * 
 * @param c  The character to check.
 * @return 1 if the character is an ASCII character, 0 otherwise. 
 */
int			ft_isascii(int c);

/**
 * @brief Check if the character is printable. 
 * 
 * @param c The character to check.
 * @return 1 if the character is printable, 0 otherwise. 
 */
int			ft_isprint(int c);

/**********************************************
 * Memory functions
 **********************************************/

/**
 * @brief Fills 'n' bytes of the memory area pointed to by 's'
 * with the constant byte 'c'. 
 * 
 * @param b  The memory area to fill.
 * @param c  The constant byte to fill the memory area with.
 * @param n The number of bytes to fill. 
 * @return Pointer to 's'.
 */
void		*ft_memset(void *s, int c, size_t n);

/**
 * @brief Copies 'n' bytes of the memory area 'src' to memory area 'dst'.  
 * 
 * @param dst The dstination memory area.
 * @param src The source memory area.	 
 * @param n The number of bytes to fill. 
 * @return  Pointer to 'dst'.
 */
void		*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Set 'n' bytes of the memory area pointed to by 's' to zero. 
 * 
 * @param s The memory area to fill.
 * @param n The number of bytes to fill.
 */
void		*ft_bzero(void *s, size_t n);

/**
 * @brief  Copies using a tempory array 'n' bytes from memory area 'src'
 * to memory area 'dst', memory areas may overlap.
 * 
 * @param dst The dstination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy. 
 * @return Pointer to 'dst'.
 */
void		*ft_memmove(void *dst, const void *src, size_t n);

/**
 * @brief Searches into memory area 's' for the first occurrence of the byte 'c'
 * up to 'n' bytes.
 *
 * @param s The memory area to search.
 * @param c The byte to search for. 
 * @param n The number of bytes to search.
 * @return Pointer to the first occurrence of the byte 'c' in memory area 's' 
 * or NULL if not found.
 */
void		*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares the first 'n' bytes of the memory areas 's1' and 's2'.
 * 
 * @param s1 The first memory area. 
 * @param s2 The second memory area. 
 * @param n The number of bytes to compare.
 * @return 0 if the first 'n' bytes of 's1' and 's2' are equal, otherwise
 * returns the difference between the first two different bytes.
 */
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Allocates memory for an array of 'nmemb' elements of 'size' bytes each,
 * initialize all its bits to zero.
 * 
 * @param nmemb Number of elements.
 * @param size Size of each element. 
 * @return Pointer to the allocated memory. 
 */
void		*ft_calloc(size_t nmemb, size_t size);

/**********************************************
 * String functions
 **********************************************/

/**
 * @brief Counts the number of characters in the null-terminated string 's'
 * up to the first null character.
 * 
 * @param s The null-terminated string to count. 
 * @return The number of characters in the string 's'.
 */
size_t		ft_strlen(const char *s);

/**
 * @brief Copies up to 'dstsize' - 1 characters from the null-terminated
 * string 'src' to 'dst', null-terminating the result.
 * 
 * @param dst The dstination null-terminated string.
 * @param src The source null-terminated string.
 * @param dstsize The size of the null-terminated dstination string.
 * @return The total length of the string it tried to create. 
 */
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Appends the null-terminated string 'src' to 'dst',
 * null-terminating the result.
 * 
 * @param dst The dstination null-terminated string. 
 * @param src The source null-terminated string. 
 * @param dstsize The size of the dstination string. 
 * @return The total length of the string it tried to create. 
 */
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief Locate the first occurrence of the character 'c' in the
 * null-terminated string 's'.
 * 
 * @param s The null-terminated string to search.
 * @param c The character to search for.
 * @return Pointer to the first occurrence of the character 'c' in the string 's,
 * or NULL if not found.
 */
char		*ft_strchr(const char *s, int c);

/**
 * @brief Locate the last occurrence of the character 'c' in the
 * null-terminated string 's'. 
 * 
 * @param s The null-terminated string to search.
 * @param c The character to search for.
 * @return Pointer to the last occurrence of the character 'c' in the string 's',
 * or NULL if not found. 
 */
char		*ft_strrchr(const char *s, int c);

/**
 * @brief Compares the first 'n' bytes of the null-terminated
 * strings 's1' and 's2'.
 * 
 * @param s1 The first null-terminated string.
 * @param s2 The second null-terminated string. 
 * @param n The number of bytes to compare. 
 * @return 0 if the first 'n' bytes of 's1' and 's2' are equal, otherwise returns
 * the difference between the first two different bytes.
 */
int			ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Searches the first occurrence of the null-terminated string 'little'
 * in the null-terminated string 'big', at most 'len' bytes are searched.
 * 
 * @param big The null-terminated string to search.
 * @param little The null-terminated string to search for. 
 * @param len The maximum number of bytes to search. 
 * @return Pointer to the first occurrence of the string 'little' in the
 * string 'big', or NULL if not found.
 */
char		*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief Create a new string allocated with malloc, formed from the original
 * string 's' with an offset of 'start' and a length of 'len'.
 * 
 * @param s The original string. 
 * @param start The offset of the new string. 
 * @param len The length of the new string. 
 * @return Pointer to the new string or NULL if the allocation fails.
 */
char		*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Concatenates the null-terminated strings 's1' and 's2' into a
 * new string allocated with malloc. 
 * 
 * @param s1 The first null-terminated string. 
 * @param s2 The second null-terminated string. 
 * @return Pointer to the new string or NULL if the allocation fails.
 */
char		*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Create a new string allocated with malloc, formed deleting the
 * characters in the string 'set' from the beginning and end of the string 's1'. 
 * 
 * @param s1 The null-terminated string to trim. 
 * @param set The null-terminated string containing the characters to trim.
 * @return Pointer to the new string or NULL if the allocation fails. 
 */
char		*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Allocates memory with malloc for a copy of the null-terminated 
 * string 's'. 
 * 
 * @param s The null-terminated string to copy.
 * @return Pointer to the new string or NULL if the allocation fails. 
 */
char		*ft_strdup(const char *s);

/**
 * @brief Allocates memory to a string with malloc for splitting the 
 * null-terminated string 's' using the character 'c' as a delimiter. 
 * 
 * @param s The null-terminated string to split.
 * @param c The delimiter character. 
 * @return The array of strings obtained from the split or NULL if the
 * allocation fails. 
 */
char		**ft_split(char const *s, char c);

/**
 * @brief Applies a function `f` to each character of the input string `s`
 * to create a new string.
 * 
 * @param s The input string.
 * @param f The function to apply to each character.
 * @return The resulting string from the successive applications of `f`.
 */
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies a function `f` to each character of the input string `s`.
 * 
 * @param s The input string.
 * @param f The function to apply to each character.
 */
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

/**********************************************
 * Data conversion functions.
 **********************************************/

/**
 * @brief Converts a lowercase letter to uppercase.
 * 
 * @param c The input character.
 * @return The resulting uppercase letter.
 */
int			ft_toupper(int c);

/**
 * @brief Converts an uppercase letter to lowercase.
 * 
 * @param c The input character.
 * @return The resulting lowercase letter.
 */
int			ft_tolower(int c);

/**
 * @brief Converts 'nptr' string to an integer.
 * 
 * @param nptr The string to convert.
 * @return The converted integer.
 */
int			ft_atoi(const char *nptr);

/**
 * @brief Converts the integer 'n' to a null-terminated string. 
 * 
 * @param n The integer to convert. 
 * @return The converted string. 
 */
char		*ft_itoa(int n);

/**********************************************
 * File descriptor functions.
 **********************************************/

/**
 * @brief Sends a character `c` to a file descriptor `fd`.
 * 
 * @param c The character to send.
 * @param fd The file descriptor.
 */
void		ft_putchar_fd(char c, int fd);

/**
 * @brief Sends a string `s` to a file descriptor `fd`.
 * 
 * @param s The string to send.
 * @param fd The file descriptor.
 */
void		ft_putstr_fd(char *s, int fd);

/**
 * @brief Sends a string `s` followed by a newline to a file descriptor `fd`.
 * 
 * @param s The string to send.
 * @param fd The file descriptor.
 */
void		ft_putendl_fd(char *s, int fd);

/**
 * @brief Sends an integer `n` to a file descriptor `fd`.
 * 
 * @param n The integer to send.
 * @param fd The file descriptor.
 */
void		ft_putnbr_fd(int n, int fd);

/**********************************************
 * Node list structure.
 **********************************************/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/**********************************************
 * Linked list functions.
 **********************************************/

/**
 * @brief Create a new node allocated with malloc, the content is
 * initialized with the value of the parameter 'content' and the
 * 'next' pointer is initialized to NULL.
 * 
 * @param content 
 * @return t_list* 
 */
t_list		*ft_lstnew(void *content);

/**
 * @brief  Adds the element 'new' at the beginning of the list.
 * 
 * @param lst 
 * @param new 
 */
void		ft_lstadd_front(t_list **lst, t_list *new);
#endif