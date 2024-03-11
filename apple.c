#include "apple.h"
#include "config.h"
#include "snake.h"

apple Apple;

extern snake Snake;
extern snake *head;
extern snake *tail;

void gen_apple() 
{
	Apple.x = rand() % GRID_SIZE;
	Apple.y = rand() % GRID_SIZE;
}

void detect_apple() 
{
	if (head->x == Apple.x && head->y == Apple.y) {
		gen_apple();
		increase_snake();
	}
}