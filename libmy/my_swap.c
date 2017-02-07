/*
** my_swap.c for  in /home/pierre/d/sanche_p/my_swap
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Wed Sep 28 11:50:09 2016 SANCHEZ Pierre
** Last update Wed Oct  5 10:07:49 2016 SANCHEZ Pierre
*/

void	my_swap(int *a, int *b)
{
  int	tmp;
  tmp = 0;
  tmp = *a;
  *a = *b;
  *b = tmp;  
}
