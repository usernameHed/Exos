/*
** list.h for  in /home/belfio_u/rendu/Piscine_C_J12/include
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue Oct 21 08:52:14 2014 ugo belfiore
** Last update Tue Oct 21 08:55:07 2014 ugo belfiore
*/

#ifndef LIST_H_
#define LIST_H_

struct	s_list
{
  char		*name;
  int		age;
  struct s_list	*next,
};

int	my_put_in_list(struct s_list **list, char *name, int age);

#endif
