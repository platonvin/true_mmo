#pragma once

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// #include "camera.h"
#include "player.h"
#include "../draw/draw.h"
#include "window.h"

typedef struct Game_t
{
    Window_t window;
    draw_t draw;
    // player_t player;
} Game_t;

void give_this_game_a_window(Game_t* game);
