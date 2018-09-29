/*
** usage.c for usage in /home/ouranos27/my_desktop/PSU/PSU_2016_my_sokoban
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Tue Dec 13 19:25:21 2016 philippe kam
** Last update Tue Dec 20 20:27:54 2016 philippe kam
*/

#include "include/my_sokoban.h"

void	usage()
{
  my_putstr("USAGE\n");
  my_putstr("           ./my_sokoban map\n");
  my_putstr("DESCRIPTION\n");
  my_putstr("           map    file representing the warehouse map,");
  my_putstr(" containing '#' for walls,\n");
  my_putstr("                  'P' for the player,");
  my_putstr("'X' for boxes and '0' for storage locations.\n");
}

void    free_tab(char **tab)
{
  int   i;

  i = 0;
  while (tab[i] != '\0')
    {
      free(tab[i]);
      i = i + 1;
    }
  free(tab);
}

void	reset(t_map map)
{
  clear();
  map.map = my_str_to_wordtab(map);
}
