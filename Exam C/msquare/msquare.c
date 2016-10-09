/*
** hidnp.c for  in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Mar  4 08:22:56 2016 Exam User
** Last update Fri Mar  4 10:44:02 2016 Exam User
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void exit_ko()
{
  printf("KO\n");
  exit(0);
}

void exit_ok(int *tab)
{
  int i = -1;
  while (tab[++i])
    printf("%d ", tab[i]);
  printf("OK\n");
  exit(0);
}

int no_minus(int *tab)
{
  int i = -1;
  while (tab[++i])
    if (tab[i] == -1)
      return (0);
  return (1);
}

void test_zero(int *tab)
{
 int i = -1;
  while (tab[++i])
    if (tab[i] == 0)
      exit_ko();
}

void test_equal(int *tab)
{
  int a = tab[0] + tab[1] + tab[2];
  int b = tab[3] + tab[4] + tab[5];
  int c = tab[6] + tab[7] + tab[8];
  int d = tab[0] + tab[4] + tab[8];
  int e = tab[6] + tab[4] + tab[2];

  int f = tab[0] + tab[3] + tab[6];
  int g = tab[1] + tab[4] + tab[7];
  int h = tab[2] + tab[5] + tab[8];
  if (a == b && b == c && c == d && d == e && e == f && f == g && g == h)
    exit_ok(tab);
  exit_ko();
}

int value_to_find(int *tab)
{
  if (!(tab[0] == -1 || tab[1] == -1 || tab[2] == -1))
    return (tab[0] + tab[1] + tab[2]);
  if (!(tab[3] == -1 || tab[4] == -1 || tab[5] == -1))
    return (tab[3] + tab[4] + tab[5]);
  if (!(tab[6] == -1 || tab[7] == -1 || tab[8] == -1))
    return (tab[6] + tab[7] + tab[8]);

  if (!(tab[0] == -1 || tab[4] == -1 || tab[8] == -1))
    return (tab[0] + tab[4] + tab[8]);
  if (!(tab[6] == -1 || tab[4] == -1 || tab[2] == -1))
    return (tab[6] + tab[4] + tab[2]);

  if (!(tab[0] == -1 || tab[3] == -1 || tab[6] == -1))
    return (tab[0] + tab[3] + tab[6]);
  if (!(tab[1] == -1 || tab[4] == -1 || tab[7] == -1))
    return (tab[1] + tab[4] + tab[7]);
  if (!(tab[2] == -1 || tab[5] == -1 || tab[8] == -1))
    return (tab[2] + tab[5] + tab[8]);
  exit_ko();
}

void change_line_1(int *tab, int value)
{
  int cnt = 0;
  if (tab[0] == -1)
    cnt++;
  if (tab[1] == -1)
    cnt++;
  if (tab[2] == -1)
    cnt++;
  if (cnt == 1)
    {
      if (tab[0] == -1)
	tab[0] = (value - (tab[1] + tab[2]));
      if (tab[1] == -1)
	tab[1] = (value - (tab[0] + tab[2]));
      if (tab[2] == -1)
	tab[2] = (value - (tab[0] + tab[1]));
    }
}

void change_line_2(int *tab, int value)
{
  int cnt = 0;
  if (tab[3] == -1)
    cnt++;
  if (tab[4] == -1)
    cnt++;
  if (tab[5] == -1)
    cnt++;
  if (cnt == 1)
    {
      if (tab[3] == -1)
	tab[3] = (value - (tab[4] + tab[5]));
      if (tab[4] == -1)
	tab[4] = (value - (tab[3] + tab[5]));
      if (tab[5] == -1)
	tab[5] = (value - (tab[3] + tab[4]));
    }
}

void change_line_3(int *tab, int value)
{
  int cnt = 0;
  if (tab[6] == -1)
    cnt++;
  if (tab[7] == -1)
    cnt++;
  if (tab[8] == -1)
    cnt++;
  if (cnt == 1)
    {
      if (tab[6] == -1)
	tab[6] = (value - (tab[7] + tab[8]));
      if (tab[7] == -1)
	tab[7] = (value - (tab[6] + tab[8]));
      if (tab[8] == -1)
	tab[8] = (value - (tab[6] + tab[7]));
    }
}
////////
void change_col_1(int *tab, int value)
{
  int cnt = 0;
  if (tab[0] == -1)
    cnt++;
  if (tab[3] == -1)
    cnt++;
  if (tab[6] == -1)
    cnt++;
  if (cnt == 1)
    {
      if (tab[0] == -1)
	tab[0] = (value - (tab[3] + tab[6]));
      if (tab[3] == -1)
	tab[3] = (value - (tab[0] + tab[6]));
      if (tab[6] == -1)
	tab[6] = (value - (tab[0] + tab[3]));
    }
}

void change_col_2(int *tab, int value)
{
  int cnt = 0;
  if (tab[1] == -1)
    cnt++;
  if (tab[4] == -1)
    cnt++;
  if (tab[7] == -1)
    cnt++;
  if (cnt == 1)
    {
      if (tab[1] == -1)
	tab[1] = (value - (tab[4] + tab[7]));
      if (tab[4] == -1)
	tab[4] = (value - (tab[1] + tab[7]));
      if (tab[7] == -1)
	tab[7] = (value - (tab[1] + tab[4]));
    }
}

void change_col_3(int *tab, int value)
{
  int cnt = 0;
  if (tab[2] == -1)
    cnt++;
  if (tab[5] == -1)
    cnt++;
  if (tab[8] == -1)
    cnt++;
  if (cnt == 1)
    {
      if (tab[2] == -1)
	tab[2] = (value - (tab[5] + tab[8]));
      if (tab[5] == -1)
	tab[5] = (value - (tab[2] + tab[8]));
      if (tab[8] == -1)
	tab[8] = (value - (tab[2] + tab[5]));
    }
}

void change_diag_1(int *tab, int value)
{
  int cnt = 0;
  if (tab[0] == -1)
    cnt++;
  if (tab[4] == -1)
    cnt++;
  if (tab[8] == -1)
    cnt++;
  if (cnt == 1)
    {
      if (tab[0] == -1)
	tab[0] = (value - (tab[4] + tab[8]));
      if (tab[4] == -1)
	tab[4] = (value - (tab[0] + tab[8]));
      if (tab[8] == -1)
	tab[8] = (value - (tab[0] + tab[4]));
    }
}

void change_diag_2(int *tab, int value)
{
  int cnt = 0;
  if (tab[2] == -1)
    cnt++;
  if (tab[4] == -1)
    cnt++;
  if (tab[6] == -1)
    cnt++;
  if (cnt == 1)
    {
      if (tab[2] == -1)
	tab[2] = (value - (tab[4] + tab[6]));
      if (tab[4] == -1)
	tab[4] = (value - (tab[2] + tab[6]));
      if (tab[6] == -1)
	tab[6] = (value - (tab[2] + tab[4]));
    }
}

void change_it(int *tab, int value)
{
  change_line_1(tab, value);
  change_line_2(tab, value);
  change_line_3(tab, value);
  
  change_col_1(tab, value);
  change_col_2(tab, value);
  change_col_3(tab, value);

  change_diag_1(tab, value);
  change_diag_2(tab, value);
}

void try_resolve(int *tab)
{
  int value = value_to_find(tab);

  change_it(tab, value);
  change_it(tab, value);
  change_it(tab, value);
  change_it(tab, value);
  change_it(tab, value);
  change_it(tab, value);
  change_it(tab, value);
  change_it(tab, value);
  change_it(tab, value);
  if (no_minus(tab))
    test_equal(tab);
}

void we_have_tab(int *tab)
{
  int i = -1;

  while (tab[++i]);
  if (i != 9)
    exit_ko();
  test_zero(tab);
  if (no_minus(tab))
    test_equal(tab);
  else
    try_resolve(tab);
}

void remp_tmp(char *tmp)
{
  int i = -1;
  while (++i < 4096)
    tmp[i] = '\0';
}

void ms(char *av)
{
  int *tab = malloc(sizeof(int) * 1024);
  char *tmp = malloc(sizeof(char) * 4096);
  remp_tmp(tmp);
  int i = 0, cnt = 0, k = 0, q = 0;
  while (av[i] == ' ' && av[i])
    i++;
  while (av[i])
    {
      if (av[i] != ' ' && (av[i] >= '0' && av[i] <= '9'))
	{
	  tmp[k] = av[i];
	  k++;
	}
      else if (av[i] == '?')
	{
	  tab[q] = -1;
	  k = 0;
	  q++;
	  while (av[i + 1] == ' ')
	    i++;
	}
      else if (av[i] == ' ')
	{
	  tab[q] = atoi(tmp);
	  k = 0;
	  q++;
	  remp_tmp(tmp);
	}
      i++;
    }
  free(tmp);
  we_have_tab(tab);
}

char *make_space(char *s)
{
  char *ns = malloc(sizeof(char) * strlen(s) + 3);
  int i = -1;
  while (s[++i])
    ns[i] = s[i];

  ns[i] = ' ';
  ns[i + 1] = '\0';
  return (ns);
}

int main(int ac, char **av)
{
  if (ac != 2)
    exit_ko();
  else
    ms(make_space(av[1]));
  return (0);
}
