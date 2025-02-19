/*
Improve the planet.c program of Section 13.7 by having it ignore case when comparing command-line arguments with strings in the planets array. 
 */

/* planet.c (Chapter 13, page 304) */
/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
  /*char *planets[] = {"mercury", "venus", "earth",
                     "mars", "jupiter", "saturn",
                     "uranus", "neptune", "pluto"};
  */
  /*
  char *planets[] = {"mercury", "venus", "earth",
                     "mars", "jupiter", "saturn",
                     "uranus", "neptune", "pluto"};
  */
  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
  int i, j;

  for (i = 1; i < argc; i++)
	for(j = 1; argv[i][j] != '\0'; j++)
	  if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
		argv[i][j] = argv[i][j] + 32;
	  else if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
	    argv[i][0] = argv[i][0] - 32;
		
  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++)
      if (strcmp(argv[i], planets[j]) == 0) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  return 0;
}
