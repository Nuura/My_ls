#include <dirent.h>
#include <stdio.h>
#include "main.h"

int tabpoint()
{
	tab[0].argu= 'l';
	tab[0].state = 0;
	tab[1].argu= 'R';
	tab[1].state = 0;
	tab[2].argu= 'r';
	tab[2].state = 0;
	tab[3].argu= 'd';
	tab[3].state = 0;
	tab[4].argu= 't';
	tab[4].state = 0;
	tab[5].argu= 'a';
	tab[5].state = 0;
	tab[6].argu= 'A';
	tab[6].state = 0;
	tab[7].argu= 'L';
	tab[7].state = 0;
	tab[8].argu= '\0';
	tab[8].state = 0;
	return 0;
}

int ls_d(int argc, char **argv, int arg)
{
	if (argv[arg][1] == 'd' && argv[arg][0] == '/')
		{
			my_putstr(argv[arg]);
			my_putstr("\n");
		}
	if (argv[arg][1] == 'd')
		my_putstr(".\n");
	arg++;
	return 0;
}


int ls ()
{
	DIR		*d;
	struct dirent *dir;
       
	d = opendir(".");
	if (d != NULL)
		{
			while ((dir = readdir(d)) != NULL)
				{
					if (dir->d_name[0] != '.')
						{
							my_putstr(dir->d_name);
							my_putchar('\t');
						}
				}
			my_putchar('\n');
			closedir(d);
		}
	return 0;
}

int ls_R (int arg, char **argv)
{
	DIR *d;
	struct dirent *dir;
	if (argv[arg][1] == 'R')
		{
			d = opendir(".");
			if(d != NULL)
				{
					my_putstr(".:\n");
					while ((dir = readdir(d)) != NULL)
						{
							if (dir->d_name[0] != '.')
								{
									my_putstr(dir->d_name);
									my_putstr("  ");
								}
							/*							if (check_folder() == 0)
								{
									struct dirent *c = check_folder();
									DIR *e;
									e = opendir(c);
									if(e != NULL)
										{
											my_putstr(".:\n");
											while ((dir = readdir(e)) != NULL)
												{
													if (dir->d_name[0] != '.')
														{
															my_putstr(dir->d_name);
															
														}
												}
										}
										}*/
							my_putstr("\n");
						}
				}
		}
	return 0;
}

int get_argument(int argc, char **argv)
{
	int i;
	int arg;
	
	i = 0;
	arg = 1;
	if (argc >= 2)
		{
			while (tab[i].argu != '\0' && arg < argc)
				{
					check_error(arg, i, argv, argc);
					i++;
				}
		}
	else
		ls();
	return 0;
}


int	main (int argc, char **argv)
{
	tabpoint();
	get_argument(argc, argv);
	check_folder();
	return 0;
}
