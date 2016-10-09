/*
** half_str.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Feb 19 09:11:10 2016 Exam User
** Last update Fri Feb 19 09:39:59 2016 Exam User
*/

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr(char *str)
{
  int	i = -1;
  while (str[++i])
    {
      my_putchar(str[i]);
    }
}

int my_strlen(char *str)
{
  int i = -1;
  while (str[++i]);
  return (i);
}

int ifCommon(char c, char *s2)
{
  int i = -1;
  while (s2[++i])
    {
      if (s2[i] == c)
	return (1);
    }
  return (0);
}

void my_putnbr(int a)
{
  if (a < 10)
    my_putchar(a + 48);
  else if (a < 20)
    {
      my_putchar('1');
      my_putchar((a - 10) + 48);
    }
  else if (a < 30)
    {
      my_putchar('2');
      my_putchar((a - 20) + 48);
    }
  else if (a < 40)
    {
      my_putchar('3');
      my_putchar((a - 30) + 48);
    }
  else if (a < 50)
    {
      my_putchar('4');
      my_putchar((a - 40) + 48);
    }
  else if (a < 60)
    {
      my_putchar('5');
      my_putchar((a - 50) + 48);
    }
  else if (a < 70)
    {
      my_putchar('6');
      my_putchar((a - 60) + 48);
    }
  else if (a < 80)
    {
      my_putchar('7');
      my_putchar((a - 70) + 48);
    }
  else if (a < 90)
    {
      my_putchar('8');
      my_putchar((a - 80) + 48);
    }
  else if (a < 100)
    {
      my_putchar('9');
      my_putchar((a - 90) + 48);
    }
  else
    {
      my_putchar('1');
      my_putchar('0');
      my_putchar('0');
    }
}

void common(char *s1, char *s2)
{
  int i = -1, cnt = 0;
  int len = my_strlen(s1);
  int len2 = my_strlen(s2);
  if (len < len2)
    while (s1[++i])
      cnt += ifCommon(s1[i], s2);
  else
    while (s2[++i])
      cnt += ifCommon(s2[i], s1);
  my_putnbr(cnt);
  my_putchar('\n');
}

int main(int ac, char **av)
{
  if (ac != 3)
    my_putchar('\n');
  else
    common(av[1], av[2]);
  return (0);
}
