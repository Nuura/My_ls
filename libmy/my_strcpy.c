/*
** my_strcpy.c for  in /home/pierre/ccc/sanche_p/my_strcpy
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Thu Sep 29 15:19:44 2016 SANCHEZ Pierre
** Last update Thu Oct  6 11:55:36 2016 SANCHEZ Pierre
*/
#include <string.h>

char	*my_strcpy(char *dest, char *src)
{
  int	i;
  i	= 0;
  while	(*(src + i) != '\0')
    {
      *(dest + i) = *(src + i);
      i++;
    }
  *(dest + i) = '\0';
  return (dest) ;
}
