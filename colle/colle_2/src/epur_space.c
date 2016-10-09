/*
** epur_space.c for  in /home/belfio_u/Hed/colle/colle_2/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May  5 18:30:50 2015 ugo belfiore
** Last update Tue May  5 18:31:35 2015 ugo belfiore
*/

#include "colle.h"

char		*epur_space(char *av)
{
  int		i;
  int		j;
  int		len;
  char		*tmp;

  i = 0;
  j = 0;
  len = my_strlen(av);
  tmp = malloc(sizeof(char) * len + 1);
  while (av[i] != '\0')
    {
      if (av[i] != ' ')
        {
          tmp[j] = av[i];
          j++;
        }
      i++;
      if (av[i] == '\0')
        tmp[j] = '\0';
    }
  return (tmp);
}
