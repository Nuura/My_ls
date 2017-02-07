/*
** my_strcat.c for  in /home/pierre/ccc/sanche_p/my_strcat
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Mon Oct  3 19:51:56 2016 SANCHEZ Pierre
** Last update Thu Oct  6 13:06:08 2016 SANCHEZ Pierre
*/
#include <string.h>
#include <stdio.h>

int	my_strlen(char *str)
{
  int	i;
  i = 0;
  while (*(str + i) != '\0')
    {
	i++;
    }
  return (i) ;
}


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

char	*my_strcat(char *dest, char *src)
{
  my_strcpy(&dest[strlen(dest)], src);
  return (dest) ;
}
