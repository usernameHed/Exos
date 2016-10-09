/*
** sapin.c for  in /home/belfio_u/PISCINE/rendu/Piscine_C_sapin
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Thu Oct 16 22:08:24 2014 ugo belfiore
** Last update Thu Nov  6 23:08:11 2014 ugo belfiore
*/

void    my_putchar(char c)
{
  write(1, &c, 1);
}
 
void    trunk(int taille, int max_stars)
{
  int i;
  int j;
 
  i = 0;
  while (i < taille)
    {
      j = 0;
      while (j < max_stars / 2)
        {
          my_putchar(' ');
          j = j + 1;
        }
      j = 0;
      while (j < taille)
        {
          my_putchar('|');
          j = j + 1;
        }
      my_putchar('\n');
      i = i + 1;
    }
}
 
int     calculate_maxstars(int taille)
{
  int   i;
  int   n_lignes;
  int   max_stars;
 
  i = 0;
  max_stars = 1;
  while (i < taille)
    {
      max_stars = max_stars + 2 * (taille + 4);
      if (i > 3)
	max_stars = max_stars - 4;
      else
	max_stars = max_stars - 2;
      i = i + 1;
    }
  return max_stars;
}
 
void    printstars(int n, int max_stars)
{
  int   i;
 
  i = 0;
  while (i < (max_stars - n) / 2)
    {
      my_putchar(' ');
      i = i + 1;
    }
  i = 0;
  while (i < n)
    {
      my_putchar('*');
      i = i + 1;
    }
  my_putchar('\n');
}
 
void    branch(int taille, int max_stars)
{
  int   n_etoiles;
  int   cur_taille;
  int   cur_ligne;
 
  n_etoiles = 1;
  cur_taille = 0;
  cur_ligne = 0;
  while (cur_taille < taille)
    {
      cur_ligne = 0;
      while (cur_ligne < taille + 4)
        {
          printstars(n_etoiles, max_stars);
          n_etoiles = n_etoiles + 2;
          cur_ligne = cur_ligne + 1;
        }
      cur_taille = cur_taille + 1;
      if (cur_taille > 3)
        n_etoiles = n_etoiles - 4;
      else
        n_etoiles = n_etoiles - 2;
    }
}
 
void    sapin(int taille)
{
  int   max_stars = calculate_maxstars(taille);
 
  branch(taille, max_stars);
  trunk(taille, max_stars);
}
 
int     main(int ac, char **av)
{
  sapin(4);
  return (0);
}
