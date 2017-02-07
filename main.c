#include <stdio.h>
#include "main.h"

void get_argument(int argc, char *argv[])
{
	int i;
	int arg;
	
	i = 0;
	arg = 1;
	if (argc >= 2 && argv[arg][0] == '-')
		{
			while (tab[i] != '\0')
				{
					if (arg < argc)
						if (argv[arg][1] == tab[i])
							{
								my_putstr(argv[arg]);
								my_putstr("\n");
								arg++;
								i = 0;
							}
					i++;
				}
		}
	else
		my_putstr("Argument Invalide\n");
}


int	main (int argc, char *argv[])
{
	get_argument(argc, argv);
	return 0;
}
