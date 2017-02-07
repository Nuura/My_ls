/*
** my_strncpy.c for  in /home/pierre/ccc/sanche_p/my_strncpy
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Thu Sep 29 16:40:01 2016 SANCHEZ Pierre
** Last update Wed Oct  5 10:06:32 2016 SANCHEZ Pierre
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  i = 0;
  while (*(src + i) != '\0' && i < n)
    {
      *(dest + i) = *(src + i);
      i++;
    }
  return (dest) ;
}
