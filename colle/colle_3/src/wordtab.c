/*
** wordtab.c for separator in /home/fenass_b/Colles/Sem_3
** 
** Made by benjamin fenasse
** Login   <fenass_b@epitech.net>
** 
** Started on  Tue May 12 14:55:48 2015 benjamin fenasse
** Last update Tue May 12 15:35:27 2015 benjamin fenasse
*/

#include "colle.h"

int	count_words_sep(char *str, char c)
{
  int	i;
  int	words;

  words = 0;
  i = -1;
  while (str[++i])
    {
      if (i == 0 || (str[i] != c && str[i - 1] == c))
	words++;
    }
  return (words);
}

int	get_word_sep(char *str, char **dest, char c)
{
  int	i;
  int	j;

  if ((*dest = malloc(my_strlen(str) + 1)) == NULL)
    exit(1);
  i = -1;
  j = -1;
  while (str[++i] && str[i] == c);
  --i;
  while (str[++i] && str[i] != c)
    (*dest)[++j] = str[i];
  (*dest)[++j] = '\0';
  return (i);
}

char	*epure_sep(char *str, char c)
{
  int	i;

  i = -1;
  while (str[++i] && str[i] == c);
  if (str[i] == '\0')
    return (str);
  return (str + i);
}

char	**my_wordtab_sep(char *str, char c)
{
  int	size;
  int	i;
  int	j;
  char	**table;

  if ((size = count_words_sep(epure_sep(str, c), c)) == -1)
    return (NULL);
  if ((table = malloc((size + 1) * sizeof(char *))) == NULL)
    return (NULL);
  i = -1;
  j = 0;
  while (++i < size)
    j += get_word_sep(str + j, &(table[i]), c);
  table[i] = NULL;
  return (table);
}
