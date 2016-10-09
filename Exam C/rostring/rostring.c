/*
** conv_nbr.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Apr  1 09:10:06 2016 Exam User
** Last update Fri Apr  1 10:38:17 2016 Exam User
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void my_putchar(char c)
{
  write (1, &c, 1);
}

void change_tab(char *str)
{
  int i = -1;
  while (str[++i])
    if (str[i] == '\t')
      str[i] = ' ';
}

char *del_space(char *str)
{
  char *tmp = malloc(sizeof(char) * (strlen(str) + 1));
  int i = 0;
  int j = 0;
  while (str[i] && (str[i] == ' ' || str[i] == '\t'))
    i++;
  while (str[i])
    {
      if (!((str[i] == ' ' && str[i + 1] == ' ')
	   || (str[i] == ' ' && str[i + 1] == '\0')))
	{
	  tmp[j] = str[i];
	  j++;
	  i++;
	}
      else
	i++;
    }
  tmp[j] = '\0';
  return (tmp);
}

int count_word(char *str)
{
  int i = -1;
  int cnt = 0;
  while (str[++i])
    if (str[i] == ' ')
      cnt++;
  return (cnt + 1);
}

void make_word(int word, char *str)
{
  int i = 0;
  int begin = 0;
  char *tmp = malloc(sizeof(char) * (strlen(str) + 1));
  int j = 0;
  while (str[i])
    {
      if (begin == 0 && str[i] != ' ')
	{
	  tmp[j] = str[i];
	  j++;
	  i++;
	}
      else if (begin == 0 && str[i] == ' ')
	{
	  begin = 1;
	  tmp[j] = '\0';
	  i++;
	}
      else
	{
	  my_putchar(str[i]);
	  i++;
	}
    }
  printf(" %s\n", tmp);
}

int main(int ac, char **av)
{
  if (ac != 2)
    my_putchar(10);
  else
    {
      change_tab(av[1]);
      char *new = del_space(av[1]);
      int word = count_word(new);
      if (word < 2)
	printf("%s\n", new);
      else
	make_word(word, new);
    }
  return (0);
}
