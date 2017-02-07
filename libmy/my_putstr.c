/*
** my_putstr.c for  in /home/pierre/d/sanche_p/my_putstr
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Wed Sep 28 09:17:59 2016 SANCHEZ Pierre
** Last update Wed Oct  5 10:02:24 2016 SANCHEZ Pierre
*/
#include<unistd.h>
void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;
  i = 0;
  while (*(str + i) != '\0')
    {
	my_putchar(*(str + i));
	i++;
    }
}
