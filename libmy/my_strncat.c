/*
** my_strncat.c for  in /home/pierre/ccc/sanche_p/my_strncat
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Tue Oct  4 10:54:42 2016 SANCHEZ Pierre
** Last update Thu Oct  6 12:57:52 2016 SANCHEZ Pierre
*/
#include <string.h>
#include <stdio.h>

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	size;
  i = 0;
  size = 0;
  while(dest[size])
    {
    size++;
    }
  while(i < n && src[i])
    {
      dest[size] = src[i];
      size++;
      i++;
    }
  dest[size] = '\0';
  return (dest);
}
