/*
** sampler.h for scroller
**
** Made by marc brout
** Login   <brout_m@epitech.net>
**
** Started on  Fri Mar 18 22:45:25 2016 marc brout
** Last update Sun Mar 20 22:25:09 2016 marc brout
*/

#ifndef SAMPLER_H_
# define SAMPLER_H_

#include "lapin.h"

/*
** SAMPLES DEFINES
*/

# define SAMPLE_FOLD "files/sounds"
# define BSF_1 "files/sounds/aerodynamicLOL.bsf"
# define BSF_2 "files/sounds/starwars.bsf"
# define BSF_3 "files/sounds/mario.bsf"
# define NB_SAMPLES 3
# define RAD(x) (((x) * M_PI) / 180)

typedef	struct		s_sample
{
  t_bunny_effect	*music;
  t_bunny_ini		*ini;
  t_bunny_ini_scope	*scope;
  double		*pitch;
  int			lenpit;
  double		*duration;
  int			lendur;
  int			sinus;
}			t_sample;

/*
** load_bsf :
**  file = relative .bsf file path
**  path = relative folder path containing
**         the music/sound in the .bsf file
**
**  change_music :
**   samples = array of t_sample
**   *curmusic = pointer to current t_sample
**   *change = boolean used in the sampler
**             (set to one when music is changed)
**   i = 1 or -1, setting the new sample
**
**  sampler :
**   sample = t_sample to play
**   *change = boolean
*/

t_sample	*load_bsf(const char *file,
			  const char *path);
void		change_music(t_sample **samples,
			     int *curmusic,
			     int *change,
			     int i);
void		sampler(t_sample *sample,
			int *change);
int		load_double_duration(t_sample *samp);
int		load_double_frequency(t_sample *samp);

#endif
