/*
** my_put_in_list.c for  in /home/belfio_u/rendu/Piscine_C_J12/include
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue Oct 21 08:59:48 2014 ugo belfiore
** Last update Tue Oct 21 09:10:28 2014 ugo belfiore
*/

#include <stdlib.h>
#include "list.h"

int	my_put_in_list(struct s_list **list, char *name, int age)
{
  struct s_list *elem;
  if (elem == NULL)
    return (1);
  elem->name = name;
  elem->age = age;
  elem->nest = *list;
  *list = elem;

  return (0);
}

void	my_show_list(struct s_list *list)
{
  struct s_list *tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp->name);
      my_putchar('\n');
      tmp = tmp->next;
    }
}
