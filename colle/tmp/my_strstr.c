/*
** my_strstr.c for  in /home/belfio_u/PISCINE/rendu/Piscine_C_J06/ex_04
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Mon Oct  6 16:07:59 2014 ugo belfiore
** Last update Wed Apr 29 10:48:41 2015 ugo belfiore
*/

#include "colle.h"

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (0);
  while (to_find[i] != '\0')
    {
      if (to_find[i] != str[i])
	return (my_strstr(str + 1, to_find));
      i++;
    }
  return (to_find);
}
