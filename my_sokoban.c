/*
** my_sokoban.c for my sokoban$ in /home/ouranos27/my_desktop/PSU/PSU_2016_my_sokoban
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Tue Dec 13 19:08:04 2016 philippe kam
** Last update Tue Dec 20 22:44:43 2016 philippe kam
*/

#include "include/my_sokoban.h"

void		moves(t_map map)
{
  t_pos		pos;
  int		key;

  draw_map(map.map);
  key = getch();
  while (key != 27)
    {
      key = getch();
      pos = player(map);
      if (key == KEY_LEFT)
	move_left(map, pos);
      else if (key == KEY_RIGHT)
	move_right(map, pos);
      else if (key == KEY_DOWN)
	move_down(map, pos);
      else if (key == KEY_UP)
	move_up(map, pos);
      else if (key == ' ')
	reset(map);
      draw_map(map.map);
    }
}

int		buffer_len(char *filepath)
{
  char		*buffer;
  ssize_t	line;
  FILE		*fd;
  size_t	len;
  int      	i;

  len = 0;
  i = 0;
  fd = fopen(filepath, "r");
  if (fd == NULL)
    return (84);
  buffer = NULL;
  while ((line = getline(&buffer, &len, fd)) > 0)
    i = i + line;
  fclose(fd);
  return (i);
}

char	*buffer(char *filepath, t_map map)
{
  int	fd;
  int	rep;

  if ((fd = open(filepath, O_RDONLY)) == -1)
    exit(84);
  if ((rep = read(fd, map.buffer, map.size)) == -1)
    exit(84);
  close(fd);
  return (map.buffer);
}

int		main_loop(char *av)
{
  t_map		map;

  initscr();
  cbreak();
  curs_set(0);
  keypad(stdscr, TRUE);
  refresh();
  map.size = buffer_len(av);
  if ((map.buffer = malloc(sizeof(char) * map.size + 1)) == NULL)
    return (84);
  map.buffer = buffer(av, map);
  map.nb_rows = nb_rows(map);
  map.nb_cols = nb_cols(map);
  map.map = tab_malloc(map.nb_rows, map.nb_cols);
  map.map = my_str_to_wordtab(map);
  moves(map);
  endwin();
  return (0);
}

int	main(int ac, char **av)
{
  if (ac != 2)
    return (84);
  else if (ac == 2 && (my_strcmp(av[1], "-h") == 0))
    usage();
  else
    {
      main_loop(av[1]);
    }
  return (0);
}
