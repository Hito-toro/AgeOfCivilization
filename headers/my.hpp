/*
** PROJECT, 2020
** AgeOfCivilization
** File description:
** global
*/

#ifndef MY
#define MY

#ifndef SCREENWIDTH
# define SCREENWIDTH 1920
#endif

#ifndef SCREENHEIGHT
# define SCREENHEIGHT 1080
#endif

/* CPP LIBRARIES */
#include <iostream>
#include <string>

/* EXTERNAL LIBRARIES */
#include <curses.h>

/*
**
**  PROJECT HEADERS
**
*/

/* 
**  PROJECT OBJECTS
*/
struct PositionStruct {
    double x;
    double y;
}

#include "Tile.hpp"

/* ENVIRONMENT */
#include "./environment/Floor.hpp"
#include "./environment/Block.hpp"

#endif