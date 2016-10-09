/*
** conv_nbr.c for  in /home/exam/rendu/ex_1
**
** Made by Exam User
** Login   <exam@epitech.net>
**
** Started on  Fri Apr  1 09:10:06 2016 Exam User
** Last update Apr 1 19:11:32 2016
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void my_putchar(char c)
{
  write (1, &c, 1);
}

void aff_tab(int **tab)
{
  int i = -1;
  int j = -1;
  while (tab[++i])
    {
      j = -1;
      while (tab[i][++j])
	{
	  if (tab[i][j] == -2)
	    printf(".");
	  else
	    printf("%d", tab[i][j] - 1);
	}
      printf("\n");
    }
}

void find_close(int **tab, int i, int j, int cnt)
{
  tab[i][j] = cnt;

  if (tab[i][j + 1])
    if (tab[i][j + 1] == -1)
      find_close(tab, i, j + 1, cnt);

  if (tab[i][j - 1])
    if (tab[i][j - 1] == -1)
      find_close(tab, i, j - 1, cnt);

  if (i > 0)
    if (tab[i - 1][j] == -1)
      find_close(tab, i - 1, j, cnt);

  if (tab[i + 1])
    if (tab[i + 1][j] == -1)
      find_close(tab, i + 1, j, cnt);
}

void algo(int **tab, int x, int y)
{
  int i = -1;
  int j = -1;
  int cnt = 1;
  while (++i < y)
    {
      j = -1;
      while (++j < x)
	{
	  if (tab[i][j] == -1)
	    {
	      find_close(tab, i, j, cnt);
	      cnt++;
	    }
	}
    }
}

int main(int ac, char **av)
{
  if (ac != 2)
    my_putchar(10);
  else
    {
      FILE *fp;
      char *line = NULL;
      size_t len = 0;
      ssize_t read;
      fp = fopen(av[1], "r");
      if (fp == NULL)
	{
	  my_putchar(10);
	  return (0);
	}
      int tall = 0;
      int **tab;
      int x = 0;
      tab = malloc(sizeof(*tab) * 4096);
      while ((read = getline(&line, &len, fp)) != -1)
	{
	  tab[tall] = malloc(sizeof(int) * read);
	  int k = -1;
	  if (x == 0)
	    x = read;
	  while (line[++k])
	    {
	      if (line[k] == '.')
		tab[tall][k] = -2;
	      else if (line[k] == 'X')
		tab[tall][k] = -1;
	      //printf("%c", line[k]);
	    }
	  tall++;
	}
      free(line);
      algo(tab, x - 1, tall);
      aff_tab(tab);
    }
  return (0);
}
