/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/ouranos27/my_desktop/PSU/PSU_2016_my_sokoban
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Wed Dec 14 14:40:40 2016 philippe kam
** Last update Tue Dec 20 22:43:37 2016 philippe kam
*/

#include "include/my_sokoban.h"

int	nb_rows(t_map map)
{
  int	i;

  i = 0;
  while (map.buffer[i] != '\n')
    i = i + 1;
  return (i);
}

int	nb_cols(t_map map)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (map.buffer[i] != '\0')
    {
      if (map.buffer[i] != '\n')
	j = j + 1;
      i = i + 1;
    }
  return (j);
}

char	**tab_malloc(int nb_rows, int nb_cols)
{
  int	i;
  char	**tab;

  i = 0;
  if ((tab = malloc(sizeof(char *) * nb_rows + 1)) == NULL)
    exit(84);
  while (i <= nb_rows)
    {
      if ((tab[i] = malloc(sizeof(char) * nb_cols + 1)) == NULL)
	exit(84);
      i = i + 1;
    }
  return (tab);
}

char	**my_str_to_wordtab(t_map map)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  while (map.buffer[i] != '\0')
    {
      k = 0;
      while (map.buffer[i] != '\n')
	{
	  map.map[j][k] = map.buffer[i];
	  i = i + 1;
	  k = k + 1;
	}
      while (map.buffer[i] == '\n')
	i = i + 1;
      map.map[j][k] = '\0';
      j = j + 1;
    }
  map.map[j] = NULL;
  return (map.map);
}
