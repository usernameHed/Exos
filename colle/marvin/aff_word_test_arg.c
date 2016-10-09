/*
** aff_word_test_arg.c for  in /home/belfio_u/rendu/marvin
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Sun Jan  4 20:48:58 2015 ugo belfiore
** Last update Sun Jan  4 20:56:22 2015 ugo belfiore
*/

#include "./include/my.h"
#include "./include/mini.h"

void	test_argument(t_file *f)
{
  int	i;

  i = f->j;
  f->mot = 0;
  f->arg = 0;
  while (f->buff[i] && f->buff[i] != '(')
    i++;
  while (f->buff[i] && f->buff[i] != ')')
    {
      if (f->buff[i] == ' ')
        f->mot++;
      if (f->buff[i] == ',')
        f->arg++;
      i++;
    }
  if (f->buff[i + 1] == '\0')
    error(50);
  else if (f->buff[i + 1] != ';')
    error(24);
  f->mot++;
}

static void	test_argument_arg_zero(t_file *f)
{
  if (f->mot == 1)
    {
      if (match(f->tab[f->i + 1 + f->tmp], "void"))
	my_printf("qui ne prend rien en paramètre ");
      else
	error(25);
    }
  else
    {
      my_printf("qui prend en paramètre un ");
      f->i += 1 + f->tmp;
      f->j = check_is_ptr(f->j, f->buff);
      check_count(f);
      check_inter(f);
      aff_type(f->type_ret_arg);
      my_printf(" nommé ");
      aff_ptr(f->tab[f->i]);
      my_printf(" ");
      f->i -= 1 + f->tmp + f->tmp_tmp;
    }
}

static void	test_argument_arg_more(t_file *f)
{
  check_count(f);
  check_inter(f);
  aff_type(f->type_ret_arg);
  my_printf(" nommé ");
  aff_ptr(f->tab[f->i]);
  my_printf(" ");
  f->i++;
  f->arg--;
  if (f->arg != -1)
    my_printf("et un ");
  while (f->buff[f->j] != '*')
    f->j++;  
}

void	test_argument_2(t_file *f)
{
  int	i;
  int	tmp;

  i = f->j;
  while (f->buff[i] && f->buff[i] != '(')
    i++;
  if (f->arg == 0)
    test_argument_arg_zero(f);
  else
    {
      tmp = f->i;
      my_printf("prenant en paramètre un ");
      f->i += 1 + f->tmp;
      f->j = check_is_ptr(f->j, f->buff);
      while (f->arg > -1)
	test_argument_arg_more(f);
      f->i = tmp;
    }
}
