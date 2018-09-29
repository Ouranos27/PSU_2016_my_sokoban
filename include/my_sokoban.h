/*
** my_sokoban.h for header in /home/ouranos27/my_desktop/PSU/PSU_2016_my_sokoban/include
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Tue Dec 13 17:25:41 2016 philippe kam
** Last update Tue Dec 20 21:30:17 2016 philippe kam
*/

#include <ncurses.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef MY_SOKOBAN_H_
#define MY_SOKOBAN_H_

typedef struct	s_map
{
  char		**map;
  char		*buffer;
  int		nb_rows;
  int		nb_cols;
  int		size;
}		t_map;

typedef struct	s_pos
{
  int		x;
  int		y;
}		t_pos;

char            *buffer_set(char *filepath);
int		nb_rows(t_map map);
int		nb_cols(t_map map);
t_pos		player(t_map map);
void		left(t_map map, t_pos pos);
void		right(t_map map, t_pos pos);
void		up(t_map map, t_pos pos);
void		down(t_map map, t_pos pos);
void		draw_map(char **map);
char		**tab_malloc(int nb_rows, int nb_cols);
char		**my_str_to_wordtab(t_map map);
void		my_putchar(char c);
void		move_left(t_map map, t_pos pos);
void		move_right(t_map map, t_pos pos);
void		move_up(t_map map, t_pos pos);
void		move_down(t_map map, t_pos pos);
int		main_loop(char *av);
int		my_strcmp(char *s1, char *s2);
void		usage();
int		my_putstr(char *str);
void		free_tab(char **tab);
void		reset(t_map map);

#endif /* MY_SOKOBAN_H_ */
