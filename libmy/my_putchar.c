/*
** my_putchar.c for  in /home/pierre/c/sanche_p/my_putchar
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Mon Sep 26 11:32:16 2016 SANCHEZ Pierre
** Last update Wed Oct  5 09:59:08 2016 SANCHEZ Pierre
*/

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}
