/*
** my_put_nbr.c for  in /home/pierre/c4/sanche_p/my_put_nbr
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Fri Sep 30 13:42:38 2016 SANCHEZ Pierre
** Last update Thu Oct  6 16:38:37 2016 SANCHEZ Pierre
*/

#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str);

int	siz(int n)
{
  int	i;
  int	size;
  i = n;
  size = 0;
  
  while (i > 0)
    {
      i = (i / 10);
      size++;
  }
  return (size) ;
  }

int	powo(int p)
{
  int	y;
  int	z;
  
  z = 0;
  y = 1;
   while (z < p)
  {
    y = y * 10;
    z++;
  }
  return(y) ;
}


void	my_put_nbr(int n)
  {
  int	j;        //nombre isole//
  int	z;        //decrementation de la taille//
  int	s;        // reste du calcul
  s = n;
  
   if (s < 0 && s != -2147483648)
    {
      my_putchar('-');
      s = s * (-1);
    }
   
   if (n == 0)
     {
       my_putchar('0');
     }
   
     if (s == -2147483648)
    {
      my_putstr("-2147483648");
      }
  
  z = siz(s);
  j = 1;

  while (z > 0)
      {
	j = s / powo(z - 1);
        s = s - j * powo(z - 1);
        z--;
	my_putchar(j + 48);
      }
  }
