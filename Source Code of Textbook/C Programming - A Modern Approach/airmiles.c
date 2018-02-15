/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* airmiles.c (Chapter 26, page 574) */
/* Determines air mileage from New York to other cities */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct city_info {
  char *city;
  int miles;
};

int compare_cities(const void *key_ptr, 
                   const void *element_ptr);

main()
{
  char city_name[81];
  struct city_info *ptr;
  const struct city_info mileage[] =
    {{"Acapulco",       2260}, {"Amsterdam",      3639},
     {"Antigua",        1783}, {"Aruba",          1963},
     {"Athens",         4927}, {"Barbados",       2100},
     {"Bermuda",         771}, {"Bogota",         2487},
     {"Brussels",       3662}, {"Buenos Aires",   5302},
     {"Caracas",        2123}, {"Copenhagen",     3849},
     {"Curacao",        1993}, {"Frankfurt",      3851},
     {"Geneva",         3859}, {"Glasgow",        3211},
     {"Hamburg",        3806}, {"Kingston",       1583},
     {"Lima",           3651}, {"Lisbon",         3366},
     {"London",         3456}, {"Madrid",         3588},
     {"Manchester",     3336}, {"Mexico City",    2086},
     {"Milan",          4004}, {"Nassau",         1101},
     {"Oslo",           3671}, {"Paris",          3628},
     {"Reykjavik",      2600}, {"Rio de Janeiro", 4816},
     {"Rome",           4280}, {"San Juan",       1609},
     {"Santo Domingo",  1560}, {"St. Croix",      1680},
     {"Tel Aviv",       5672}, {"Zurich",         3926}};

  printf("Enter city name: ");
  scanf("%80[^\n]", city_name);
  ptr = bsearch(city_name, mileage,
                sizeof(mileage)/sizeof(mileage[0]),
                sizeof(mileage[0]), compare_cities);
  if (ptr != NULL)
    printf("%s is %d miles from New York City.\n",
           city_name, ptr->miles);
  else
    printf("%s wasn't found.\n", city_name);

  return 0;
}

int compare_cities(const void *key_ptr, 
                   const void *element_ptr)
{
  return strcmp((char *) key_ptr,
                ((struct city_info *) element_ptr)->city);
}
