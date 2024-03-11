#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include <SDL.h>

#ifndef SNAKE_H
#define SNAKE_H

enum {
	SNAKE_UP,
	SNAKE_DOWN,
	SNAKE_LEFT,
	SNAKE_RIGHT,
};

typedef struct snake {
	int x;
	int y;
	int dir;

	struct snake *next;
} snake;

#endif