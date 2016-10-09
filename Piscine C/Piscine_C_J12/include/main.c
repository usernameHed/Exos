/*
** main.c for  in /home/belfio_u/rendu/Piscine_C_J12/include
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue Oct 21 08:56:17 2014 ugo belfiore
** Last update Tue Oct 21 09:09:41 2014 ugo belfiore
*/

#include <stdlib.h>
#include "list.h"

int	main()
{
  struct s_list *list;

  list = NULL;
  my_put_in_list(&list, "toto", 42);
  my_put_in_list(&list, "titi", 42);
  my_show_lis(list);
  return (0);
}
