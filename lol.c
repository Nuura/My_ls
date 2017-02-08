#include <dirent.h>
#include <stdio.h>
#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>

int check_error(int arg, int i, char **argv, int argc)
{
	if (argv[arg][0] == '-')
		{
			if (argv[arg][1] == tab[i].argu && argv[arg][2] == '\0')
				{
					tab[i].state = 1;
					ls_d(argc, argv, arg);
					ls_R(arg, argv);
					arg++;
					i = 0;
				}
			else if (tab[i].argu == '\0')
				{
					my_putstr("ls : option invalide -- '");
					my_putchar(argv[arg][1]);
					my_putstr("'\n");
					return 0;
				}
		}
	return 0;
}

int check_folder(t_fold *s_fold)
{
	DIR		*d;
	struct dirent *dir;
	struct stat file_info;

	d = opendir(".");
	if (d != NULL)
		{
			while ((dir = readdir(d)) != NULL)
				{
				   	if (dir->d_name[0] != '.')
					 	lstat(dir->d_name, &file_info);
					if (S_ISDIR(file_info.st_mode))
						{
							file_info.st_mode->str;
							my_putstr("oui");
							return 0;
						}
				}
		}
	return 1;
}
