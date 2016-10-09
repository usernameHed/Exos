/*
** search_error.c for  in /home/belfio_u/Hed/colle/colle_2/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May  5 18:21:16 2015 ugo belfiore
** Last update Tue May  5 18:55:39 2015 ugo belfiore
*/

#include "colle.h"

static void	try(char a, char b)
{
  if ((a == '-' && b == '-') || (a == '-' && b == '+')
      || (a == '-' && b == '*') || (a == '-' && b == '/')
      || (a == '-' && b == '(') || (a == '-' && b == ')')
      || (a == '+' && b == '-') || (a == '+' && b == '+')
      || (a == '+' && b == '*') || (a == '+' && b == '/')
      || (a == '+' && b == ')') || (a == '+' && b == '(')
      || (a == '*' && b == '-') || (a == '*' && b == '+')
      || (a == '*' && b == '/') || (a == '*' && b == '*')
      || (a == '*' && b == '(') || (a == '*' && b == ')')
      || (a == '/' && b == '-') || (a == '/' && b == '+')
      || (a == '/' && b == '/') || (a == '/' && b == '*')
      || (a == '(' && b == ')')
      || (a == '/' && b == '(') || (a == '/' && b == ')'))
    my_error("erreur opérateur.\n");
}

static void	error_para(char *str)
{
  int		i;
  int		tmp;

  i = 0;
  tmp = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '(')
        tmp++;
      if (str[i] == ')')
        tmp--;
      if (tmp < 0)
        my_error("erreur paranthèse.\n");
      i++;
    }
  if (tmp != 0)
    my_error("erreur paranthèse.\n");
}

static void	search_error(char *av)
{
  int		i;
  int		test;

  i = 0;
  test = 1;
  while (av[i] != '\0' && test == 1)
    {
      if (av[i] == '+' || av[i] == '-' || av[i] == '/' || av[i] == '*'
          || (av[i] >= '0' && av[i] <= '9') || av[i] == '('
          || av[i] == ')' || av[i] == ' ')
        test = 1;
      else
        test = 0;
      try(av[i], av[i + 1]);
      i++;
    }
  if (test == 0)
    my_error("erreur argument.\n");
}

void	calculator(char *av)
{
  search_error(av);
  error_para(av);
  av = epur_space(av);
  brut(av);
}
