#ifndef _game_h_
#define _game_h_

#include <stdio.h>
#include <stdlib.h>
#include "stm32f0xx.h"
#include <stdbool.h>
#include "keypad.h"

//#include <limits.h>

typedef struct Node {
    int id;
    struct Node * next;
} node;

void game();
void game_over();

#endif
