/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:11:58 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/03 18:16:05 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*word_alloc(char const **s, char c)
{
	char		*word;
	char const	*str;
	int			length;

	length = 0;
	while (**s && **s == c)
		(*s)++;
	str = (*s);
	while (**s && **s != c)
	{
		(*s)++;
		length++;
	}
	word = malloc(length + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, str, length + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		n_string;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	n_string = count_word(s, c);
	result = malloc(sizeof(char *) * (n_string + 1));
	if (!result)
		return (NULL);
	result[n_string] = 0;
	while (i < n_string)
	{
		result[i] = word_alloc(&s, c);
		if (!result[i])
		{
			while (i--)
				free(result[i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	return (result);
}

// void print_and_free_split(char **split)
// {
// 	int i = 0;
// 	if (!split)
// 	{
// 		printf("NULL\n");
// 		return;
// 	}
// 	while (split[i])
// 	{
// 		printf("\"%s\"\n", split[i]);
// 		free(split[i]);
// 		i++;
// 	}
// 	free(split);
// }

// int main(void)
// {
// 	char **result;

// 	// Test 1: Basic split
// 	printf("Test 1: \"hello world test\", delimiter ' '\n");
// 	result = ft_split("hello world test", ' ');
// 	print_and_free_split(result);

// 	// Test 2: Multiple delimiters
// 	printf("\nTest 2: \"a,,b,c\", delimiter ','\n");
// 	result = ft_split("a,,b,c", ',');
// 	print_and_free_split(result);

// 	// Test 3: NULL input
// 	printf("\nTest 3: NULL input\n");
// 	result = ft_split(NULL, ',');
// 	print_and_free_split(result);

// 	// Test 4: Only delimiters
// 	printf("\nTest 4: \",,,,\", delimiter ','\n");
// 	result = ft_split(",,,,", ',');
// 	print_and_free_split(result);

// 	// Test 5: Empty string
// 	printf("\nTest 5: \"\", delimiter ','\n");
// 	result = ft_split("", ',');
// 	print_and_free_split(result);

// 	return 0;
// }
