#include <dirent.h>
#include <stdio.h>
#include "main.h"


int ls ()
{
	DIR		*d;
	struct dirent *dir;
	 	
	d = opendir(".");
	if (d)
		{
			while((dir = readdir(d)) != NULL)
				{
					my_putstr(dir->d_name);
					my_putstr(" ");
				}
			my_putstr("\n");
			closedir(d);
		}
	return 0;
}

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
		ls();
}


int	main (int argc, char *argv[])
{
	get_argument(argc, argv);
	return 0;
}
