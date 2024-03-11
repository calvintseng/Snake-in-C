#ifndef MAP_H
#define MAP_H

#include "config.h"

typedef struct {
    int values[GRID_SIZE][GRID_SIZE];
} unordered_map;

void initialize_map() {
    unordered_map mp = {0};
}

#endif