/*
** rev_wstr.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Mar 18 08:05:45 2016 Exam User
** Last update Fri Mar 18 08:39:47 2016 Exam User
*/

#include <stdlib.h>
#include <string.h>

void my_putchar(char c)
{
  write (1, &c, 1);
}

void put(char *c)
{
  int i = 0;
  while (c[i])
    {
      my_putchar(c[i]);
      i++;
    }
}

int word(char *tmp)
{
  int i = -1;
  int cnt = 0;
  while (tmp[++i])
    {
      if (tmp[i] == ' ')
	cnt++;
    }
  return (cnt);
}

void inverse(char *str)
{
  int i = strlen(str) - 1;
  int cnt = 0;
  while (i >= 0)
    {
      if (str[i] == ' ' || i == 0)
	{
	  if (cnt)
	    put(" ");
	  int k = i + 1;
	  if (i == 0)
	    k--;
	  while (str[k] && str[k] != ' ')
	    {
	      my_putchar(str[k]);
	      k++;
	    }
	  cnt++;
	}
      i--;
    }
}

void wstr(char *str)
{
  int i = -1;
  char *tmp = malloc(sizeof(char) * strlen(str) + 1);
  int j = 0;
  int m = -1;
  while (str[++m])
    if (str[m] == '\t')
      str[m] = ' ';
  while (str[++i] == ' ' && str[i] != '\0');
  while (str[i])
    {
      if (str[i] != ' ')
	{
	  tmp[j] = str[i];
	  j++;
	}
      else if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
	{
	  tmp[j] = str[i];
	  j++;
	}
      i++;
    }
  tmp[j] = '\0';
  int w = word(tmp);
  if (w < 1)
    put(tmp);
  else
    inverse(tmp);
}

int main(int ac, char **av)
{
  int i = -1;
  if (ac != 2)
    put("\n");
  else
    {
      wstr(av[1]);
      put("\n");
    }
  return (0);
}
